/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_min_move_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 02:37:48 by aroualid          #+#    #+#             */
/*   Updated: 2024/03/15 23:57:18 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	comb_ra_rb_a(t_stack *a, t_stack *b, int nb)
{
	int	move;

	move = num_pos(b, nb);
	if (move > right_pos_in_a(a, nb))
		return (move);
	else
		return (right_pos_in_a(a, nb));
}

int	comb_rra_rrb_a(t_stack *a, t_stack *b, int nb)
{
	int	move;

	move = b->size - num_pos(b, nb);
	if (move > a->size - right_pos_in_a(a, nb))
		return (move);
	else
		return (a->size - right_pos_in_a(a, nb));
}

int	comb_rrb_ra_a(t_stack *a, t_stack *b, int nb)
{
	int	move;

	move = b->size - num_pos(b, nb);
	move += right_pos_in_a(a, nb);
	return (move);
}

int	comb_rb_rra_a(t_stack *a, t_stack *b, int nb)
{
	int	move;

	move = num_pos(b, nb);
	move += (a->size - right_pos_in_a(a, nb));
	return (move);
}

int	count_min_move_a(t_stack *a, t_stack *b)
{
	int	move;
	int	cost;
	int	i;

	i = 0;
	if (b->data)
		cost = comb_ra_rb_a(a, b, b->data[i]);
	while (i < b->size && b->data)
	{
		move = comb_ra_rb_a(a, b, b->data[i]);
		if (cost > move)
			cost = move;
		move = comb_rra_rrb_a(a, b, b->data[i]);
		if (cost > move)
			cost = move;
		move = comb_rrb_ra_a(a, b, b->data[i]);
		if (cost > move)
			cost = move;
		move = comb_rb_rra_a(a, b, b->data[i]);
		if (cost > move)
			cost = move;
		i++;
	}
	return (cost);
}
