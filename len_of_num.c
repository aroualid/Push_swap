/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   len_of_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <ari@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 13:24:48 by aroualid          #+#    #+#             */
/*   Updated: 2024/02/27 13:56:46 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*int	len_of_num(long int num)
{
	int	count;

	count = 1;
	if (num < 0)
	{
		num = -num;
		count++;
	}
	while (num >= 10)
	{
		num = num / 10;
		count++;
	}
	return (count);
}

int	check_overflow(long int num)
{
	if (num < 0 && (num < -2147483648 || len_of_num(num) > 11))
	{
		return (false);
	}
	if (num > 0 && (num > 2147483647 || len_of_num(num) > 10))
	{
		return (false);
	}
	return (true);
}
*/

int	ft_skip_zero(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] == '0' && (str[i + 1]) && (str[i + 1]) == '0')
		i++;
	return (i);
}


int    check_over_under_int(int ac, char **av)
{
    int        i;
    int        j;
    char    *str;
    char    *arg;

    i = 1;
    j = 0;
    while (i < ac)
    {
        str = ft_itoa(ft_atoi(av[i]));
        arg = av[i];
        if (*arg == '-' && str[j++] == '-')
            arg++;
        while (*arg && *arg == '0' && ft_strlen(arg) > 1)
            arg++;
        j += ft_skip_zero(str);
        if (ft_strcmp(arg, str + j) != 0)
            return (free(str), false);
        free(str);
        j = 0;
        i++;
    }
    return (true);
}




