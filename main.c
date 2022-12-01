/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:44:34 by maragao           #+#    #+#             */
/*   Updated: 2022/12/01 17:58:54 by maragao          ###   ########.rio      */
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

	stack_b = lst_new(2);
	if (all_checks(argc, argv) == -1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	stack_a = fill_stack(argv);
	print_stack(stack_a);
	write(1, "\n", 1);
//	swap(&stack_a);
//	print_stack(stack_a);
//	write(1, "\n", 1);
//	reverse_rotate(&stack_a);
//	print_stack(stack_a);
//	write(1, "\n", 1);
	push(&stack_b, &stack_a);
	print_stack(stack_a);
	write(1, "\n", 1);
	print_stack(stack_b);
	write(1, "\n", 1);
	return (0);
}
