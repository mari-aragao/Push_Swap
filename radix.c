/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 22:25:02 by maragao           #+#    #+#             */
/*   Updated: 2022/12/10 23:16:57 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(int argc, t_list **stack_a, t_list **stack_b)
{
//	t_list	*temp;
	t_list	*temp_a;
//	t_list	*temp_b;
	int	i;
//	int	test;
	int	count;

	i = 8;
	while (i >= 8)
	{
/*		test = 1;
		temp = *stack_a;
*/		count = 0;
/*		while (temp)
		{
			if (temp_a->bin[i] == '1')
			{
				test = 1;
				break ;
			}
			temp = temp->next;	
		}
*/		temp_a = *stack_a;
		while (temp_a && count < argc - 1)
		{
			if (temp_a->bin[8] == '0')
				push_b(stack_a, stack_b);
			else
				rotate_a(stack_a);
			count++;
		}
//		temp_b = *stack_b;
//		while (temp_b && test == 1)
//		{
//			temp_b = temp_b->next;
//			push_a(stack_a, stack_b);
//		}
		i--;
	}
}
