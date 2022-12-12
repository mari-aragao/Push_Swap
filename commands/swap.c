/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:21:09 by maragao           #+#    #+#             */
/*   Updated: 2022/12/12 19:10:22 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_list **stack)
{
	t_list	*temp;
	t_list	*temp2;

	if (lst_size(*stack) == 0 || lst_size(*stack) == 1)
		return ;
	temp = *stack;
	temp2 = temp->next;
	temp->next = temp->next->next;
	temp2->next = temp;
	*stack = temp2;
}

void	swap_a(t_list **stack_a)
{
	swap(stack_a);
	write(1, "sa\n", 3);
}

void	swap_b(t_list **stack_b)
{
	swap(stack_b);
	write(1, "sb\n", 3);
}

void	swap_ss(t_list **stack_a, t_list **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	write(1, "ss\n", 3);
}
