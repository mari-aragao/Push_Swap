/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 22:21:53 by maragao           #+#    #+#             */
/*   Updated: 2022/12/12 20:11:03 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_stack(t_list *stack)
{
	while (stack)
	{
		ft_putnbr(stack->content);
		write(1, " ", 1);
		stack = stack->next;
	}
}

void	print_index(t_list *stack)
{
	while (stack)
	{
		ft_putnbr(stack->index);
		write(1, " ", 1);
		stack = stack->next;
	}
}
