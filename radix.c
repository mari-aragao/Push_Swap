/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 22:25:02 by maragao           #+#    #+#             */
/*   Updated: 2022/12/11 14:21:33 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(int argc, t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;
	int	i;
	int	test;
	int	count;
	int	size_b;

	i = 8;
	while (i >= 0)
	{
		temp = *stack_a;
		test = 0;
		count = 0;
		while (temp)
		{
			if (temp->bin[i] == '1')
			{
				test = 1;
				break ;
			}
			temp = temp->next;	
		}
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
		while (size_b > 0 && test == 1)
		{
			push_a(stack_a, stack_b);
			size_b--;
		}
		i--;
	}
}
