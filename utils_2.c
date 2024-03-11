/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 13:16:51 by aroualid          #+#    #+#             */
/*   Updated: 2024/03/11 18:40:37 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_two(t_stack *a, t_stack *b)
{
	ft_pb(a, b);
	ft_pb(a, b);
}

int	minus(t_stack *stack)
{
	int	i;
	int	index;

	i = 1;
	index = 0;
	while (i < stack->size)
	{
		if (stack->data[index] < stack->data[i])
			i++;
		else if (stack->data[index] > stack->data[i])
		{
			index = i;
			i++;
		}
	}
	return (index);
}

int	maxus(t_stack *stack)
{
	int	i;
	int	index;

	i = 1;
	index = 0;
	while (i < stack->size)
	{
		if (stack->data[index] > stack->data[i])
			i++;
		else if (stack->data[index] < stack->data[i])
		{
			index = i;
			i++;
		}
	}
	return (index);
}

int num_pos(t_stack *a, int nb)
{
	int	i;

	i = 0;
	while (i < a->size)
	{
		if (a->data[i] != nb)
			i++;
		else
			return (i);
	}
	return (i);
}

int	right_pos (t_stack *b, int nb)
{
	int	i;
	int	j;
	
	i = 1;
	j = 0;
	if (nb > b->data[0] && nb < b->data[b->size - 1])
		return (0);
	if (nb > b->data[maxus(b)] || nb < b->data[minus(b)])
		return (maxus(b));
	while ((nb > b->data[j] || nb < b->data[j + 1]) && j < b->size)
	{
		i++;
		j++;
	}
	return (i);
}
