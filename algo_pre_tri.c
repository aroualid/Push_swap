/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_pre_tri.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 13:26:20 by aroualid          #+#    #+#             */
/*   Updated: 2024/03/01 14:16:57 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_two(t_stack *a, t_stack *b)
{
	ft_pb(b, a);
	ft_pb(b, a);
}

int	minus(t_stack *stack)
{
	int	i;
	int index;

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
	int index;

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


