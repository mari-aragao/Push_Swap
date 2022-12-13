/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 21:40:53 by maragao           #+#    #+#             */
/*   Updated: 2022/12/12 20:43:46 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	*sort_array(int argc, int *arr)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < argc - 2)
	{
		j = i + 1;
		while (j < argc - 1)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			j++;
		}
		i++;
	}
	return (arr);
}

int	*create_array(int argc, char **argv)
{
	int	len;
	int	i;
	int	*arr;

	len = argc - 1;
	arr = malloc(len * sizeof(int));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		arr[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	return (sort_array(argc, arr));
}

char	*create_bin(int n)
{
	char	*bin;
	int		i;

	bin = (char *)malloc(9 * sizeof(char));
	i = 8;
	while (i >= 0)
	{
		bin[i] = n % 2 + '0';
		n = n / 2;
		i--;
	}
	return (bin);
}

void	make_index(int argc, char **argv, t_list **stack_a)
{
	int		i;
	int		*arr;
	t_list	*temp;

	arr = create_array(argc, argv);
	temp = *stack_a;
	while (temp)
	{
		i = 0;
		while (i < argc - 1)
		{		
			if (temp->content == arr[i])
			{
				temp->index = i;
				temp->bin = create_bin(i);
				break ;
			}
			i++;
		}
		temp = temp->next;
	}
	free(arr);
}
