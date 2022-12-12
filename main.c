/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:44:34 by maragao           #+#    #+#             */
/*   Updated: 2022/12/12 17:32:02 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*fill_stack(char **argv)
{
	int	i;
	t_list	*stack;

	stack = lst_new(ft_atoi(argv[1]));
	i = 2;
	while (argv[i])
		lst_add_back(stack, lst_new(ft_atoi(argv[i++])));
	return (stack);
}

void	sort_call(int argc, t_list **stack_a, t_list **stack_b)
{
	t_list *temp;

	temp = *stack_a;
	if (argc == 3)
	{
		if (temp->content > temp->next->content)
			swap_a(stack_a);
	}
	if (argc == 4)
		sort_three(stack_a);
	else if (argc == 5 || argc ==  6)
		sort_five(stack_a, stack_b);
	else if (argc > 6 && argc <= 501)
		radix_sort(argc, stack_a, stack_b);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_b = NULL;
	if (all_checks(argc, argv) == -1)
		return (0);
	stack_a = fill_stack(argv);
	make_index(argc, argv, &stack_a);
	sort_call(argc, &stack_a, &stack_b);
	return (0);
}
