/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:32:13 by aroualid          #+#    #+#             */
/*   Updated: 2024/02/06 18:22:28 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}


void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*ds;
	size_t	i;

	ds = (char *)dest;
	i = 0;
	while (i < n)
	{
		*(char *)ds = *(char *)src;
		ds++;
		src++;
		i++;
	}
	return (dest);
}
