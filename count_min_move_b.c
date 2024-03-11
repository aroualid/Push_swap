/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_min_move_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 13:04:42 by aroualid          #+#    #+#             */
/*   Updated: 2024/03/11 15:30:57 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	comb_ra_rb_b(t_stack *a, t_stack *b, int nb)
{
	int	move;

	move = num_pos(a, nb);
	if (move > right_pos(b, nb))
		return (move);
	else
		return (right_pos(b, nb));
}

int	comb_rra_rrb_b(t_stack *a, t_stack *b, int nb)
{
	int	move;

	move = a->size - num_pos(a, nb);
	if (move > b->size - right_pos(b, nb))
		return (move);
	else
		return (b->size - right_pos(b, nb));
}

int	comb_rra_rb_b(t_stack *a, t_stack *b, int nb)
{
	int	move;

	move = a->size - num_pos(a, nb);
	move += right_pos(b, nb);
	return (move);
}


int	comb_ra_rrb_b(t_stack *a, t_stack *b, int nb)
{
	int	move;

	move = num_pos(a, nb);
	move += (b->size - right_pos(b, nb));
	return (move);
}

int	count_min_move_b(t_stack *a, t_stack *b)
{
	int	move;
	int cost;
	int i;
	
	i = 0;
	cost = comb_ra_rb_b(a, b, a->data[i]);
	while (i < a->size)
	{
		move = comb_ra_rb_b(a, b, a->data[i]);
		if (cost > move)
			cost =  move;
		move = comb_rra_rrb_b(a, b, a->data[i]);
		if (cost > move)
			cost = move;
		move = comb_rra_rb_b(a, b, a->data[i]);
		if (cost > move)
			cost = move;
		move = comb_ra_rrb_b(a, b, a->data[i]);
		if (cost > move)
			cost = move;		
	i++;
	}
	return (cost);	
}
