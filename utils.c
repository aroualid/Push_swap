/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <ari@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:32:13 by aroualid          #+#    #+#             */
/*   Updated: 2024/03/10 02:16:52 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

int	check_empty_arguments(int ac, char **str)
{
	int	i;

	i = 0;
	while (i < ac)
	{
		if (ft_strcmp(str[i], "") == 0 || (ft_strcmp(str[i], " ") == 0))
			return (false);
		i++;
	}
	return (true);
}

int	ft_isspace(int c)
{
	if (c == ' ' || c == '\f' || c == '\n' || c == '\r'
		|| c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	right_pos_in_a (t_stack *a, int nb)
{
	int	i;
	
	i = 1;
	if (nb < a->data[0] && nb > a->data[a->size - 1])
		return (0);
	if (nb > a->data[maxus(a)] || nb < a->data[minus(a)])
		return (minus(a));
	while (nb < a->data[i] || nb > a->data[i + 1])
		i++;
	return (i);
}
