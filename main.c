/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:44:34 by maragao           #+#    #+#             */
/*   Updated: 2022/11/29 19:34:36 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_list *ptr)
{
	t_list *temp;

	temp = ptr;
	while(temp->next)
	{
		ft_putnbr(temp->content);
		write(1, " ", 1);
		temp = temp->next;
	}
}

t_list *fill_stack_a(int argc, char **argv)
{
	int		i;
	t_list	*stack_a;
	
	stack_a = NULL;
	i = 1;
	while (i < argc - 1)
		lst_add_back(stack_a, lst_new(ft_atoi(argv[i++])));
	return (stack_a);
}

int	check_number(int argc, char **argv)
{
	int	i;
	int j;
	i = 1;

	while (i < argc - 1)
	{
		j = 0;
		while (argv[i][j++])
		{
			if (argv[i][j] < '0' && argv[i][j] > '9')
				return(-1);
		}
		i++;
	}
	return(0);
}

int	check_repeated(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while(i < argc - 1)
	{
		j = i + 1;
		while (j < argc - 1)
		{
			if (ft_strncmp(argv[i], argv[j]) == 0)
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_list	stack_a;
	t_list	stack_b;

	stack_b = NULL;
	if (check_number(argc, argv) == -1)
	{
		error();
		return (0);
	}
	if (check_repeated(argc, argv) == -1)
	{
		error();
		//free na stack a
		return (0);
	}
	stack_a = fill_stack_a(argc,argv);
	print_stack(stack_a);
	write(1, "\n", 1);
	print_stack(stack_a);
	write(1, "\n", 1);
	return (0);
}
