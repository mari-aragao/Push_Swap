/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 22:25:02 by maragao           #+#    #+#             */
/*   Updated: 2022/12/11 12:40:55 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(int argc, t_list **stack_a, t_list **stack_b)
{
//	t_list	*temp;
	t_list	*temp_a;
	int	i;
//	int	test;
	int	count;

	i = 8;
//	while (i >= 7)
//	{
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
		while (count < argc - 1)
		{
			if (temp_a->bin[i] == '0')
				push_b(&temp_a, stack_b);
			else if (temp_a->bin[8] == '1')
				rotate_a(&temp_a);
			count++;
		}
		while (*stack_b)
			push_a(stack_a, stack_b);
//		i--;
//	}
}
