/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_min_move.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 13:04:42 by aroualid          #+#    #+#             */
/*   Updated: 2024/03/08 17:36:47 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	comb_ra_rb(t_stack *a, t_stack *b, int nb)
{
	int	move;

	move = num_pos(a, nb);
	if (move > right_pos(b, nb))
		return (move);
	else
		return (right_pos(b, nb));
}

int	comb_rra_rrb(t_stack *a, t_stack *b, int nb)
{
	int	move;

	move = a->size - num_pos(a, nb);
	if (move > b->size - right_pos(b, nb))
		return (move);
	else
		return (b->size - right_pos(b, nb));
}

int	comb_rra_rb(t_stack *a, t_stack *b, int nb)
{
	int	move;

	move = a->size - num_pos(a, nb);
	move += right_pos(b, nb);
	return (move);
}


int	comb_ra_rrb(t_stack *a, t_stack *b, int nb)
{
	int	move;

	move = num_pos(a, nb);
	move += (b->size - right_pos(b, nb));
	return (move);
}

int	count_min_move(t_stack *a, t_stack *b)
{
	int	move;
	int cost;
	int i;
	
	i = 0;
	cost = comb_ra_rb(a, b, a->data[i]);
	while (i < a->size)
	{
		move = comb_ra_rb(a, b, a->data[i]);
		if (cost > move)
			cost =  move;	;
		move = comb_rra_rrb(a, b, a->data[i]);
		if (cost > move)
			cost = move;
		move = comb_rra_rb(a, b, a->data[i]);
		if (cost > move)
			cost = move;
		move = comb_ra_rrb(a, b, a->data[i]);
		if (cost > move)
			cost = move;
	i++;
	}
	return (cost);	
}
