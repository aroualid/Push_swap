/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <ari@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:32:12 by aroualid          #+#    #+#             */
/*   Updated: 2024/02/27 18:42:06 by ari              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	char	**str = NULL;
	int		*dtr = NULL;
	int		j = 0;
	int		i = 0;

	str = check_arg(ac, av, &j);
	dtr = check_good_arg(ac, av);
    if (dtr == NULL)
        return (1);
    else
    {
		if (pars(dtr, ac, av) == false)
			return (false);
		else
		{
			while (i < j)
			{
				printf("%d\n", dtr[i]);
				i++;
			}
		}
	}
}
