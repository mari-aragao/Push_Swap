/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:44:34 by maragao           #+#    #+#             */
/*   Updated: 2022/11/29 21:06:33 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_list *stack)
{
	while(stack)
	{
		ft_putnbr(stack->content);
		write(1, " ", 1);
		stack = stack->next;
	}
}

t_list	*fill_stack(int argc, char **argv)
{
	int	i;
	int	temp;
	t_list	*stack;
	t_list	*ptr;

	stack = NULL;
	ptr = stack;
	i = 1;
	while (i < argc - 1)
	{
		temp = ft_atoi(argv[i]);
		ptr = lst_new(temp);
		ptr = ptr->next;
		i++;
	}
	print_stack(stack);
	return (stack);
}

int	check_number(char **argv)
{
	int	i;
	int	j;
//	int	temp;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9') && argv[i][j] != '-' && argv[i][j] != '+')
				return(-1);
			if (j != 0 && (argv[i][j] == '-' || argv[i][j] == '+'))
				return(-1);
			j++;
		}
//		temp = ft_atoi(argv[i]);
//		if (temp < -2147483648 || temp > 2147483647)
//			return (-1);	
		i++;
	}
	return(0);
}

int	check_repeated(char **argv)
{
	int i;
	int j;

	i = 1;
	while(argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_strcmp(argv[i], argv[j]) == 0)
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
//	t_list	*stack_a;
//	t_list	*stack_b;

//	stack_b = NULL;
	(void)argc;
	if (check_number(argv) == -1)
	{
		write(1, "Error\n", 6);
		//error();
		return (0);
	}
	if (check_repeated(argv) == -1)
	{
		write(1, "Error\n", 6);
		//error();
		//free na stack a
		return (0);
	}
//	stack_a = lst_new(1);	
//	lst_add_front(&stack_a, lst_new(2));
//	lst_add_back(stack_a, lst_new(3));	
//	stack_a = fill_stack(argc, argv);
//	print_stack(stack_a);
//	write(1, "\n", 1);
//	print_stack(stack_a);
//	write(1, "\n", 1);
	return (0);
}
