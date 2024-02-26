/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:56:56 by aroualid          #+#    #+#             */
/*   Updated: 2024/02/26 20:06:58 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long str_to_int(const char *str) {
    int i = 0;
    int sign = 1;
    long result = 0;

	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+') {
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9') {
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return result * sign;
}

int check_for_zero(const char *str)
{
	while (*str) 
	{
		if (*str == '0')
			return 1; 
		str++;
	}
	return (0);
}

long	ft_atoi(const char *str) 
{
	long result;

	result = str_to_int(str);
	if (result == 0 && check_for_zero(str) == 0)
		return (0);
    return result;
}


