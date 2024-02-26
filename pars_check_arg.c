/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars_check_arg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:59:49 by aroualid          #+#    #+#             */
/*   Updated: 2024/02/26 14:43:12 by aroualid         ###   ########.fr       */
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

long	*check_good_arg(char **str, int ac, char *av[])
{
	int		i;
	long	*dtr;
	char	**test;

	dtr = malloc (sizeof (long ) * (size_to_malloc(ac, av) + 100));
	i = 0;
	if (check_if_no_digit(str) == false)
	{
		write(1, "Error\n", 6);
		return (false);
	}		
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

int	check_sort(long *num, int ac)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	if (ac == 1)
	{
		write(1, "Error\n", 6);
		return (1) ;
	}
	while (num[i])
	{
		if (num[i] < num[i + 1])
			count++;
	i++;
	}
	if (count == ac)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (1);
}

int	check_duplicate(long *num)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (num[j])
	{
		while (num[i])
		{
			if(num[j] == num[i])
			{
				write(1, "Error\n", 6);
				return (false);
			}
		i++;
		}
	j++;
	i = j + 1;
	}
	return (true);
}


int    main(int ac, char **av)
{
  char    **str = NULL;
  long    *dtr = NULL;
  int    i = 0;
  int   j = 0;

  str = check_arg(ac, av, &j);
  dtr = check_good_arg(str, ac, av);
    if (dtr == NULL)
        return (1);
    else
    {
        while (i < j) 
        {
            printf("%li\n", dtr[i]);
			check_overflow(dtr[i]);
            i++;
        }
            check_sort(dtr, ac - 1);
			check_duplicate(dtr);
	}
}

