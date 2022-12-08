/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:44:34 by maragao           #+#    #+#             */
/*   Updated: 2022/12/07 17:48:20 by maragao          ###   ########.fr       */
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

t_list	*fill_stack(char **argv)
{
	int	i;
	t_list	*stack;

	stack = lst_new(ft_atoi(argv[1]));
	i = 2;
	while (argv[i])
		lst_add_back(stack, lst_new(ft_atoi(argv[i++])));
	return (stack);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_b = NULL;
	if (all_checks(argc, argv) == -1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	stack_a = fill_stack(argv);
	make_index(argc, argv, &stack_a);
	
	printf("\n1a stack a:\n");
	print_stack(stack_a);
	
	sort_five(&stack_a, &stack_b);
	
	printf("\n2 stack a:\n");
	print_stack(stack_a);
	printf("\nstack b:\n");
	print_stack(stack_b);
	return (0);
}
