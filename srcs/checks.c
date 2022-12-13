/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:11:32 by maragao           #+#    #+#             */
/*   Updated: 2022/12/13 19:18:01 by maragao          ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	all_checks(int argc, char **argv)
{
	if (argc < 2)
		return (-1);
	if (check_number(argv) == -1)
	{
		write(2, "Error\n", 6);
		return (-1);
	}
	if (check_repeated(argv) == -1)
	{
		write(2, "Error\n", 6);
		return (-1);
	}
	if (check_already_sorted(argc, argv) == -1)
		return (-1);
	return (0);
}

int	check_already_sorted(int argc, char **argv)
{
	int	i;
	int	temp1;
	int	temp2;

	i = 1;
	while (i < argc - 1)
	{
		temp1 = ft_atoi(argv[i]);
		temp2 = ft_atoi(argv[i + 1]);
		if (temp1 > temp2)
			break ;
		i++;
	}
	if (i == argc - 1)
		return (-1);
	return (0);
}

int	check_number(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (!(is_digit(argv[i][j])) &&
					argv[i][j] != '-' && argv[i][j] != '+')
				return (-1);
			if (j != 0 && (argv[i][j] == '-' || argv[i][j] == '+'))
				return (-1);
			if (j == 0 && (argv[i][j] == '-' || argv[i][j] == '+') \
				&& (!(is_digit(argv[i][1]))))
				return (-1);
			j++;
		}
		if (ft_atoi_long(argv[i]) < -2147483648 \
			|| ft_atoi_long(argv[i]) > 2147483647)
			return (-1);
		i++;
	}
	return (0);
}

int	check_repeated(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_strcmp(argv[i], argv[j]) == 0)
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}
