/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 22:25:02 by maragao           #+#    #+#             */
/*   Updated: 2022/12/12 21:13:37 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	condition(t_list **stack_a, int i)
{
	t_list	*temp;

	temp = *stack_a;
	while (temp)
	{
		if (temp->bin[i] == '1')
			return (1);
		temp = temp->next;
	}
	return (0);
}

void	radix_sort(int argc, t_list **stack_a, t_list **stack_b)
{
	int		i;
	int		test;
	int		count;
	int		size_b;

	i = 9;
	while (--i >= 0)
	{
		test = condition(stack_a, i);
		count = 0;
		size_b = 0;
		while (count < argc - 1 && test == 1)
		{
			if ((*stack_a)->bin[i] == '0')
			{
				push_b(stack_a, stack_b);
				size_b++;
			}
			else if ((*stack_a)->bin[i] == '1')
				rotate_a(stack_a);
			count++;
		}
		while (size_b--, size_b > 0 && test == 1)
			push_a(stack_a, stack_b);
	}
}
