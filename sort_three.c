/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:54:15 by maragao           #+#    #+#             */
/*   Updated: 2022/12/12 16:48:09 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_list **stack_a)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;

	first = *stack_a;
	second = first->next;
	third = lst_last(first);
	if (first->content > second->content && first->content < third->content && third->content > second->content)
	{
		swap_a(stack_a);
	}
	if (first->content > second->content && first->content > third->content && second->content > third->content)
	{
			swap_a(stack_a);
			reverse_rotate_a(stack_a);
	}
	if (first->content > second->content && first->content > third->content && second->content < third->content)
		rotate_a(stack_a);
	if (first->content < second->content && first->content < third->content && third->content < second->content)
	{
		swap_a(stack_a);
		rotate_a(stack_a);
	}
	if (first->content < second->content && first->content > third->content && second->content > third->content)
		reverse_rotate_a(stack_a);
}
