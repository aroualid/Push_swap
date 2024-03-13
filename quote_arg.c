/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quote_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <ari@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 13:20:32 by aroualid          #+#    #+#             */
/*   Updated: 2024/03/13 16:30:30 by aroualid         ###   ########.fr       */
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
			return (true);
		i++;
	}
	return (false);
}

int	count_arg_in_quote(char *av)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (is_quote(av) == true)
	{
		while (av[i])
		{
			while (av[i] && av[i] == ' ')
				i++;
			if (av[i] == '\0')
				break ;
			count++;
			while (av[i] && av[i] != ' ')
				i++;
		}
	}
	else
		i++;
	return (count);
}

int	nb_of_quote(char *av)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (is_quote(av) == 1)
	{
		count++;
		i++;
	}
	else
		i++;
	return (count);
}

int	size_to_malloc(int ac, char *av[])
{
	int	total;
	int	total_arg_in_quote;
	int	total_quote;
	int	i;

	i = 1;
	total = 0;
	total_arg_in_quote = 0;
	total_quote = 0;
	while (i < ac)
	{
		if (is_quote(av[i]) == true)
		{
			total_arg_in_quote += count_arg_in_quote(av[i]);
			total_quote += nb_of_quote(av[i]);
		}
		i++;
	}
	total = ((ac -1) - total_quote + total_arg_in_quote);
	return (total);
}

char	**check_arg(int ac, char *av[], int *len)
{
	int		i;
	int		j;
	int		k;
	char	**str;
	char	**tmp;

	i = 1;
	j = 0;
	k = 0;
	str = malloc(sizeof (char *) * (size_to_malloc(ac, av) + 1));
	while (i < ac)
	{
		if (is_quote(av[i]) == 1)
		{
			tmp = (ft_split(av[i], ' '));
			while (tmp[k] != NULL)
				str[j++] = tmp[k++];
			k = 0;
		}
		else
			str[j++] = av[i];
		i++;
	}
	str[j] = NULL;
	return (*len = j, str);
}

