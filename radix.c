/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 22:25:02 by maragao           #+#    #+#             */
/*   Updated: 2022/12/11 12:08:42 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(int argc, t_list **stack_a, t_list **stack_b)
{
//	t_list	*temp;
	t_list	*temp_a;
	t_list	*temp_b;
//	int	i;
//	int	test;
	int	count;
	int	size_b;

//	i = 8;
//	while (i >= 0)
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
		temp_b = *stack_b;
		size_b = 0;
		while (count < argc - 1)
		{
			printf("temp_a = %i\n", temp_a->content);
			if (temp_a->bin[8] == '0')
			{
				push_b(&temp_a, stack_b);
				temp_a = temp_a->next;
				size_b++;
			}
			else if (temp_a->bin[8] == '1')
				rotate_a(&temp_a);
			count++;
		}
		while (size_b > 0)
		{
			push_a(&temp_a, &temp_b);
			size_b--;
		}
//		i--;
//	}
}
