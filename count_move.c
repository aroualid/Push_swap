/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:33:01 by aroualid          #+#    #+#             */
/*   Updated: 2024/03/04 11:54:56 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_ra_rb(t_stack *a, t_stack *b, int nb)
{
	int	i;
	int	pos;
	int	to_reach;

	i = 0;
	pos = find_pos(a, nb);
	to_reach = right_pos(b, nb);
	i = pos;
	if (pos < to_reach)
		i = to_reach;
	return (i);
}

int	count_rra_rrb(t_stack *a, t_stack *b, int nb)
{
	int	i;
	int	pos;
	int	to_reach;

	i = 0;
	pos = find_pos(a, nb);
	to_reach = right_pos(b, nb);
	i = (a->size - pos);
	if (i < to_reach)
		i = b->size - to_reach;
	return (i);
}

int count_rra_rb(t_stack *a, t_stack *b, int nb)
{
	int	i;
	int	pos;
	int	to_reach;

	i = 0;
	pos = find_pos(a, nb);
	to_reach = right_pos(b, nb);
	i = (a->size - pos);
	i += to_reach;
	return (i);
}

int count_ra_rrb(t_stack *a, t_stack *b, int nb)
{
	int	i;
	int	pos;
	int	to_reach;

	i = 0;
	pos = find_pos(a, nb);
	to_reach = right_pos(b, nb);
	i = (pos);
	i += (b->size - to_reach);
	return (i);
}

int min_move(t_stack *a, t_stack *b, int nb)
{
	int	ra_rb;
	int	rra_rrb;
	int	rra_rb;
	int	ra_rrb;
	int	min;

	min = 0;
	ra_rb = count_ra_rb(a, b, nb);
	rra_rrb = count_rra_rrb(a, b, nb);
	rra_rb = count_rra_rb(a, b, nb);
	ra_rrb = count_ra_rrb(a, b, nb);
	if (ra_rb <= rra_rrb && ra_rb <= rra_rb && ra_rb <= ra_rrb)
		min = ra_rb;
	if (rra_rrb <= ra_rb && rra_rrb <= rra_rb && rra_rrb <= ra_rrb)
		min = rra_rrb;
	if (rra_rb <= ra_rb && rra_rb <= rra_rrb && rra_rb <= ra_rrb)
		min = rra_rb;
	if (ra_rrb <= ra_rb && ra_rrb <= rra_rrb && ra_rrb <= rra_rb)
		min = ra_rrb;
	return (min);
}
