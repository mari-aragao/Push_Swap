/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:54:15 by maragao           #+#    #+#             */
/*   Updated: 2022/12/13 18:20:04 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_three(t_list **stack_a)
{
	int	first;
	int	second;
	int	third;

	first = (*stack_a)->content;
	second = (*stack_a)->next->content;
	third = (lst_last(*stack_a))->content;
	if (first > second && first < third && third > second)
		swap_a(stack_a);
	if (first > second && first > third && second > third)
	{
		swap_a(stack_a);
		reverse_rotate_a(stack_a);
	}
	if (first > second && first > third && second < third)
		rotate_a(stack_a);
	if (first < second && first < third && third < second)
	{
		swap_a(stack_a);
		rotate_a(stack_a);
	}
	if (first < second && first > third && second > third)
		reverse_rotate_a(stack_a);
}
