/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:27:32 by maragao           #+#    #+#             */
/*   Updated: 2022/12/12 20:11:39 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate(t_list **stack)
{
	t_list	*temp;
	t_list	*temp2;
	t_list	*temp3;

	if (lst_size(*stack) == 0 || lst_size(*stack) == 1)
		return ;
	temp = *stack;
	temp2 = lst_last(*stack);
	temp3 = temp->next;
	temp2->next = temp;
	temp->next = NULL;
	*stack = temp3;
}

void	rotate_a(t_list **stack_a)
{
	rotate(stack_a);
	write(1, "ra\n", 3);
}

void	rotate_b(t_list **stack_b)
{
	rotate(stack_b);
	write(1, "rb\n", 3);
}

void	rotate_rr(t_list **stack_a, t_list **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	write(1, "rr\n", 3);
}
