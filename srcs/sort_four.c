/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 21:11:33 by maragao           #+#    #+#             */
/*   Updated: 2022/12/12 20:12:02 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	find_smallest(t_list **stack_a, t_list **stack_b)
{
	int		i;
	t_list	*temp;
	int		check;

	i = 0;
	temp = *stack_a;
	check = 0;
	while (i < 5)
	{
		if (check == 1)
			break ;
		if (temp->index == 0)
		{
			temp = temp->next;
			push_b(stack_a, stack_b);
			check++;
		}
		else
		{
			temp = temp->next;
			rotate_a(stack_a);
		}
		i++;
	}
}

void	sort_four(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;

	find_smallest(stack_a, stack_b);
	sort_three(stack_a);
	push_a(stack_a, stack_b);
	temp = *stack_a;
}
