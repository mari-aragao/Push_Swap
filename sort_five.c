/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 21:11:33 by maragao           #+#    #+#             */
/*   Updated: 2022/12/07 18:06:17 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_two_smallest(t_list **stack_a, t_list **stack_b)
{
	int	i;
	t_list	*temp;
	
	i = 0;
	temp = *stack_a;
	while (i < 5)
	{
		if (temp->index == 0 || temp->index == 1)
		{
			temp = temp->next;
			push_b(stack_a, stack_b);
		}
		else
		{
			temp = temp->next;
			rotate_a(stack_a);
		}
		i++;
	}
}

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;

	find_two_smallest(stack_a, stack_b);
	sort_three(stack_a);
	push_a(stack_a, stack_b);
	push_a(stack_a, stack_b);
	temp = *stack_a;
	if (temp->content > temp->next->content)
		swap_a(stack_a);
}
