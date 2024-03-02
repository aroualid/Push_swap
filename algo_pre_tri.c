/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_pre_tri.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 13:26:20 by aroualid          #+#    #+#             */
/*   Updated: 2024/03/02 09:10:31 by aroualid         ###   ########.fr       */
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

int	right_pos (t_stack *b, int nb)
{
	int	i;
	
	i = 1;
	if (nb > b->data[maxus(b)] || nb < b->data[minus(b)])
		return (maxus(b));
	if (nb > b->data[0] && nb < b->data[b->size - 1])
		return (0);
	while ((nb > b->data[i] || nb < b->data[i + 1]) && i < b->size)
		i++;
	return (i);
}

int	find_pos(t_stack *a, int nb)
{
	int	i;

	i = 0;
	while (a->data[i] != nb)
		i++;
	return (i);
}
