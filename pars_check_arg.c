/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars_check_arg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <ari@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:59:49 by aroualid          #+#    #+#             */
/*   Updated: 2024/02/26 14:07:06 by aroualid         ###   ########.fr       */
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
	long	*num;
	char	**test;

	num = malloc (sizeof (char *) * (size_to_malloc(ac, av) + 1));
	i = 0;
	if (check_if_no_digit(str) == false)
		return (false);
	else
	{
		while (str[i] != NULL)
		{
			num[i] = ft_atoi(str[i]);
			i++;
		}
		return (num);
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
		return (false) ;
	}
	while (num[i])
	{
		if (num[i] < num[i + 1])
			count++;
	i++;
	}
	if (count == ac)
		return (false);
	return (true);
}

int	check_duplicate(long *num, int ac)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (ac == 1)
		return (false);
	while (num[j])
	{
		while (num[i])
		{
			if(num[j] == num[i])
			{
				return (false);
				write(1, "Error\n", 6);
			}
		i++;
		}
	j++;
	i = j + 1;
	}
	return (true);
}

int	pars(long *num, int ac)
{
	int	i;
	int	j; 
	
	i = 0;
	j = 0;

	while(num[i])
	{
		if (check_overflow(num[i]) == false)
			write(1, "Error\n", 6);
	i++;	
	}
	check_duplicate(num, ac - 1);
	if (check_sort(num, ac - 1) == false)
		return (false);
	return (true);
}

int    main(int ac, char **av)
{
  char    **str = NULL;
  long    *num = NULL;
  int    i = 0;
  int   j = 0;

  str = check_arg(ac, av, &j);
  num = check_good_arg(str, ac, av);
    if (num == NULL)
        return (1);
    else
    {
        while (i < j) 
        {
			printf("%li\n", num[i]);

            /*printf("%s", "la taille de : '");
           printf("%s", "' est de : ");
            printf("%d\n", len_of_num(num[i])); */
            i++;
        }
		pars(num, ac);
	}
}
