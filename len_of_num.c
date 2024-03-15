/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   len_of_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 13:24:48 by aroualid          #+#    #+#             */
/*   Updated: 2024/03/15 11:41:42 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_skip_zero(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] == '0' && (str[i + 1]) && (str[i + 1]) == '0')
		i++;
	return (i);
}

int	check_over_under_int(int ac, char **av)
{
	int		i;
	int		j;
	char	*str;
	char	*arg;

	i = 0;
	j = 0;
	while (i < ac)
	{
		str = ft_itoa(ft_atoi(av[i]));
		arg = av[i];
		if (!arg || !str)
			return (0);
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
