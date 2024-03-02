/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_move.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 09:10:43 by aroualid          #+#    #+#             */
/*   Updated: 2024/03/02 09:43:09 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	ret_to_move(t_stack *a, t_stack *b, int nb)
{
	int	mid_a;
	int	mid_b;
	int	pos;
	int	to_reach;

	mid_a = a->size / 2;
	mid_b = b->size / 2;
	pos = find_pos(a, nb);
	to_reach = right_pos(b, nb);
	if (pos < mid_a)
		count_ra(pos);
	if (pos > mid_a) 
		count_rra(pos, a->size);
	if (to_reach < mid_b)
		count_rb(to_reach);
	if (to_reach > mid_b)
		count_rrb(to_reach, b->size);
}

int	count_ra(int pos)
{
	int	i;
	i = pos;
	return (i);
}

int	count_rra(int pos, int size)
{
	int	i;
	i = size - pos;
	return (i);
}

int	count_rb(int pos)
{
	int	i;
	i = pos;
	return (i);
}

int	count_rrb(int pos, int size)
{
	int	i;
    i = size - pos;
    return (i);
}