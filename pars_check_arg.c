/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars_check_arg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:47:02 by aroualid          #+#    #+#             */
/*   Updated: 2024/03/14 11:58:54 by aroualid         ###   ########.fr       */
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
					&& ((j > 0 && ft_isdigit(str[i][j - 1]))
					|| ft_isdigit(str[i][j + 1]) == 0))
					return (false);
				j++;
			}
			else
				return (false);
		}
		i++;
	}
	return (true);
}

int	*check_good_arg(int ac, char *av[])
{
	int		i;
	int		*dtr;
	char	**str;
	int		j;

	str = check_arg(ac, av, &j);
	if(!str)	
		return(0);
	j = 0;
	dtr = malloc(sizeof (int) * (size_to_malloc(ac, av) + 1));
	i = 0;
	if (check_if_no_digit(str) == false
		|| check_over_under_int(size_to_malloc(ac, av), str) == false)
	{
		write(2, "Error\n", 6);
		return (free_arg(str, dtr));
	}
	else
	{
		while (str[i] != NULL)
		{
			dtr[i] = ft_atoi(str[i]);
			free(str[i]);
			i++;
		}
		free(str);
		return (dtr);
	}
}

int	check_sort(int *num, int ac, char **str)
{
	int	i;
	int	j;
	int	count;
	int	total;

	i = 0;
	j = 1;
	count = 1;
	total = size_to_malloc(ac, str);
	while (j < total)
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
	int	k;

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

	i = 0;
	if (ac == 2)
	{
		if (size_to_malloc(ac, str) >= ac)
			i++;
		else
			return (false);
	}
	if (check_duplicate(num, ac, str) == false
		|| check_empty_arguments(ac, str) == false)
		return (write(2, "Error\n", 6), false);
	if (check_sort(num, ac, str) == false || ac == 1)
		return (false);
	return (true);
}
