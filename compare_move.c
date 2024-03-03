/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_move.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 09:18:36 by aroualid          #+#    #+#             */
/*   Updated: 2024/03/03 18:01:24 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	compare_ra_rb(t_stack *a, t_stack *b, int nb, nb_move *c)
{
	int	pos;
	int	to_reach;
	int	i;

	pos = find_pos(a, nb);
	to_reach = right_pos(b, nb);
	c->c_ra = count_ra(pos);
	c->c_rb = count_rb(to_reach);
	i = 0;
	if (c->c_ra == c->c_rb)
		i = c->c_ra;
	if (c->c_ra > c->c_rb)
	{
		i = c->c_rb;
		c->c_ra -= c->c_rb;
	}
	if (c->c_rb > c->c_ra)
	{
		i = c->c_ra;
		c->c_rb -= c->c_ra;
	}
	return (i);
}

int	compare_rra_rrb(t_stack *a, t_stack *b, int nb, nb_move *c)
{
	int	pos;
	int	to_reach;
	int	i; // nombre de rrr//

	pos = find_pos(a, nb);
	to_reach = right_pos(b, nb);
	c->c_ra = count_rra(pos, a->size);
	c->c_rb = count_rrb(to_reach, b->size);
	i = 0;
	if (c->c_ra == c->c_rb)
		i = c->c_ra;
	if (c->c_ra > c->c_rb)
	{
		i = c->c_rb;
		c->c_ra -= c->c_rb;
	}
	if (c->c_rb > c->c_ra)
	{
		i = c->c_ra;
		c->c_rb -= c->c_ra;
	}
	return (i);
}

