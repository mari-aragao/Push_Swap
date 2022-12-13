/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:34:22 by maragao           #+#    #+#             */
/*   Updated: 2022/12/12 20:11:30 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	reverse_rotate(t_list **stack)
{
	t_list	*temp;
	t_list	*temp2;
	t_list	*temp3;
	t_list	*ptr;
	int		len;

	if (lst_size(*stack) == 0 || lst_size(*stack) == 1)
		return ;
	len = lst_size(*stack);
	temp = *stack;
	ptr = *stack;
	temp2 = lst_last(*stack);
	temp3 = temp->next;
	temp2->next = temp;
	while (--len > 1)
		ptr = ptr->next;
	ptr->next = NULL;
	*stack = temp2;
}

void	reverse_rotate_a(t_list **stack_a)
{
	reverse_rotate(stack_a);
	write(1, "rra\n", 4);
}

void	reverse_rotate_b(t_list **stack_b)
{
	reverse_rotate(stack_b);
	write(1, "rrb\n", 4);
}

void	reverse_rotate_rrr(t_list **stack_a, t_list **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	write(1, "rrr\n", 4);
}
