/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_move.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 09:18:36 by aroualid          #+#    #+#             */
/*   Updated: 2024/03/03 22:15:13 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	compare_ra_rb(t_stack *a, t_stack *b, int nb, nb_move *c)
{
	int	pos;
	int	to_reach;


	pos = find_pos(a, nb);
	to_reach = right_pos(b, nb);
	c->c_ra = count_ra(pos);
	c->c_rb = count_rb(to_reach);
	if (c->c_ra == c->c_rb)
		c->c_rr = c->c_ra;
	if (c->c_ra > c->c_rb)
	{
		c->c_rr = c->c_rb;
		c->c_ra -= c->c_rb;
	}
	if (c->c_rb > c->c_ra)
	{
		c->c_rr = c->c_ra;
		c->c_rb -= c->c_ra;
	}
}

void	compare_rra_rrb(t_stack *a, t_stack *b, int nb, nb_move *c)
{
	int	pos;
	int	to_reach;

	pos = find_pos(a, nb);
	to_reach = right_pos(b, nb);
	c->c_rra = count_rra(pos, a->size);
	c->c_rrb = count_rrb(to_reach, b->size);
	if (c->c_rra == c->c_rrb)
		c->c_rrr = c->c_rra;
	if (c->c_rra > c->c_rrb)
	{
		c->c_rrr = c->c_rrb;
		c->c_rra -= c->c_rrb;
	}
	if (c->c_rrb > c->c_rra)
	{
		c->c_rrr = c->c_rra;
		c->c_rrb -= c->c_rra;
	}
}

void	compare_ra_rrb(t_stack *a, t_stack *b, int nb, nb_move *c)
{
	int	pos;
	int	to_reach;

	pos = find_pos(a, nb);
	to_reach = right_pos(b, nb);
	c->c_ra = count_ra(pos);
	c->c_rrb = count_rrb(to_reach, b->size);	
}

void	compare_rra_rb(t_stack *a, t_stack *b, int nb, nb_move *c)
{
	int	pos;
	int	to_reach;

	pos = find_pos(a, nb);
	to_reach = right_pos(b, nb);
	c->c_ra = count_rra(pos, a->size);
	c->c_rrb = count_rb(to_reach);
}
