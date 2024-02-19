/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars_arg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 13:20:32 by aroualid          #+#    #+#             */
/*   Updated: 2024/02/19 16:50:02 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int	is_quote(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			return (1);
		i++;
	}
	return (0);
}

void	check_arg(int	ac, char *av[])
{
	int		i;
	char	**str;

	i = 1;
	while (i < ac)
	{
		if (is_quote(av[i]) == 1)
		{
			str = (ft_split(av[1], ' '));
		}
		else
		{
			str = 
	}
}

