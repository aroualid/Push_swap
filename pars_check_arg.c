/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars_check_arg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <ari@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:59:49 by aroualid          #+#    #+#             */
/*   Updated: 2024/02/27 00:07:30 by ari              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_if_no_digit(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (ft_isdigit(str[i][j]) == 1 || (str[i][j] == '-'
				|| str[i][j] == '+'))
			{
				if ((str[i][j] == '-' || str[i][j] == '+')
					&& (ft_isdigit(str[i][j - 1]) == 1
					|| ft_isdigit(str[i][j + 1]) == 0))
					return (write(1, "Error\n", 6), false);
					
				j++;
			}
			else
				return (write(1, "Error\n", 6), false);
		}
		i++;
	}
	return (true);
}

int	*check_good_arg(char **str, int ac, char *av[])
{
	int	i;
	int	*dtr;

	dtr = malloc (sizeof (char **) * (size_to_malloc(ac, av) + 10));
	i = 0;
	if (check_if_no_digit(str) == false)
		return (false);
	else
	{
		while (str[i] != NULL)
		{
			dtr[i] = ft_atoi(str[i]);
			i++;
		}
		return (dtr);
	}
}

int	check_sort(int *num, int ac, char **str)
{
	int	i;
	int j;
	int	count;
	int	total;

	i = 0;
	j = 1;
	count = 1;
	total = size_to_malloc(ac, str);
	while (num[j])
	{
		if (num[i] < num[j])
			count++;
	i++;
	j++;
	}
	if (count == total)
	{
		return (false);
	}
	return (true);
}

int	check_duplicate(int *num, int ac, char *av[])
{
	int	i;
	int	j;
	int k; 

	i = 1;
	j = 0;
	k = size_to_malloc(ac, av);

	while (j < k)
	{
		while (i < k)
		{
			if (num[j] == num[i])
			{
				return (false);
			}
		i++;
		}
	j++;
	i = j + 1;
	}
	return (true);
}

int	pars(int *num, int ac, char **str)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (ac == 2)
	{
		if (size_to_malloc(ac, str) >= ac)
			j++;
		else
			return (write(1, "Error\n", 6), false);
	}
	if (check_sort(num, ac, str) == false || ac == 1)
		return (false);
	if (check_duplicate(num, ac, str) == false  || check_empty_arguments(ac, str) == false)
		return (write(1, "Error\n", 6), false);
	while (num[i])
	{
		if (check_overflow(num[i]) == false)2406
			return (write(1, "Error\n", 6), false);
		i++;
	}
	return (true);
}
