/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   len_of_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 13:24:48 by aroualid          #+#    #+#             */
/*   Updated: 2024/02/24 17:36:56 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	len_of_num(long int num)
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
	if (num < 0 && (num < INT_MIN || len_of_num(num) > 11))
	{
		write(1, "Error\n", 6);
		return (false);
	}
	if (num >= 0 && (num > INT_MAX || len_of_num(num) > 10))
	{
		write(1, "Error\n", 6);
		return (false);
	}
	return (true);
}
