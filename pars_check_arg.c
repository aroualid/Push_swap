/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars_check_arg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:59:49 by aroualid          #+#    #+#             */
/*   Updated: 2024/02/23 17:49:26 by aroualid         ###   ########.fr       */
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
					return (0);
				j++;
			}
			else
				return (0);
		}
		i++;
	}
	return (1);
}

int	*check_good_arg(char **str, int ac, char *av[])
{
	int		i;
	int		*dtr;
	char	**test;

	dtr = malloc (sizeof (char *) * (size_to_malloc(ac, av) + 1));
	i = 0;
	if (check_if_no_digit(str) == 0)
		return (NULL);
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
