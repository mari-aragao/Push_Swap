/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragao <maragao@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:11:32 by maragao           #+#    #+#             */
/*   Updated: 2022/12/11 20:52:24 by maragao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	all_checks(int argc, char **argv)
{
	/*conferir essa condição*/
	if (argc < 2)
	{
		write(2, "Error\n", 6);
		return(-1);	
	}
	if (check_number(argv) == -1)
	{
		write(2, "Error\n", 6);
		return(-1);	
	}
	if (check_repeated(argv) == -1)
	{
		write(2, "Error\n", 6);
		return(-1);	
	}
	return (0);
}

int	check_number(char **argv)
{
	int	i;
	int	j;
	long int	temp;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9') && argv[i][j] != '-' && argv[i][j] != '+')
				return(-1);	
			if (j != 0 && (argv[i][j] == '-' || argv[i][j] == '+'))
				return(-1);	
			if (j == 0 && (argv[i][j] == '-' || argv[i][j] == '+') && !(argv[i][j + 1] >= '0' && argv[i][j + 1] <= 9))
				return(-1);	
			j++;
		}
		temp = ft_atoi_long(argv[i]);
		if (temp < -2147483648 || temp > 2147483647)
			return (-1);
		i++;
	}
	return(0);
}

int	check_repeated(char **argv)
{
	int i;
	int j;

	i = 1;
	while(argv[i])
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

