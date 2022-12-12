/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 12:13:27 by maragao           #+#    #+#             */
/*   Updated: 2022/12/12 18:54:25 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_list **stack1, t_list **stack2)
{
	t_list	*temp;
	t_list	*temp2;
	t_list	*temp3;

	if (lst_size(*stack1) == 0)
		return ;
	temp = *stack1;
	temp2 = temp->next;
	temp->next = NULL;
	*stack1 = temp2;
	temp3 = *stack2;
	temp->next = temp3;
	*stack2 = temp;
}

void	push_a(t_list **stack_a, t_list **stack_b)
{
	push(stack_b, stack_a);
	write(1, "pa\n", 3);
}

void	push_b(t_list **stack_a, t_list **stack_b)
{
	push(stack_a, stack_b);
	write(1, "pb\n", 3);
}
