/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars_arg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 13:20:32 by aroualid          #+#    #+#             */
/*   Updated: 2024/02/23 12:38:41 by aroualid         ###   ########.fr       */
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

int	count_arg_in_quote(char *av[])
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	if (is_quote(av[i]) == 1)
	{
		while (av[i][j])
		{
			while (av[i][j] && av[i][j] == ' ')
				j++;
			if (av[i][j] == '\0')
				break ;
			count++;
			while (av[i][j] && av[i][j] != ' ')
				j++;
		}
	}
	else
		i++;
	return (count);
}

int	nb_of_quote(char *av[])
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (is_quote(av[i]) == 1)
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
	while (i < ac)
	{	
		total_arg_in_quote = count_arg_in_quote(&av[i]);
		total_quote = nb_of_quote(&av[i]);
		i++;
	}																	
	total = (ac - 1 - total_quote + total_arg_in_quote);
	return (total);
}

char	**check_arg(int ac, char *av[])
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
	return (str);
}

int	main(int ac, char **av)
{
	char **str = NULL;
	int i = 0;
	str = check_arg(ac, av);
	while (str[i] != NULL)
	{
		printf("%s\n", str[i]);
		i++;
	}
}
