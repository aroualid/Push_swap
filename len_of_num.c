/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   len_of_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <ari@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 13:24:48 by aroualid          #+#    #+#             */
/*   Updated: 2024/02/27 00:20:28 by ari              ###   ########.fr       */
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
	if (num < 0 && (num < INT_MIN || len_of_num(num) >= 11))
	{
		return (false);
	}
	if (num >= 0 && (num > INT_MAX || len_of_num(num) >= 10))
	{
		return (false);
	}
	return (true);
}
