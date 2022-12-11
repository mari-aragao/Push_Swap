/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 22:21:53 by maragao           #+#    #+#             */
/*   Updated: 2022/12/10 22:23:07 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_list *stack)
{
	while(stack)
	{
		ft_putnbr(stack->content);
		write(1, " ", 1);
		stack = stack->next;
	}
}

void	print_index(t_list *stack)
{
	while(stack)
	{
		ft_putnbr(stack->index);
		write(1, " ", 1);
		stack = stack->next;
	}
}

void	print_bin(t_list *stack)
{
	while(stack)
	{
		printf("%s", stack->bin);
		printf("  ");
		stack = stack->next;
	}
}
