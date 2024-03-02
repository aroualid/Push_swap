/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_move.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 09:18:36 by aroualid          #+#    #+#             */
/*   Updated: 2024/03/02 10:12:10 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	compare_ra_rb(t_stack *a, t_stack *b, int nb, int *c_ra, int *c_rb)
{
	int	pos;
	int	to_reach;
	int	i; // nombre de rr//
	int	nra;
	int	nrb;
	
	pos = find_pos(a, nb);
	to_reach = right_pos(b, nb);
	nra = count_ra(pos);
	nrb = count_rb(to_reach);
	i = 0;
	if (c_ra == c_rb)
		i = nra;
	if (c_ra > c_rb)
	{
		i = nrb;
		nra -= nrb;
	}
	if (c_rb > c_ra)
	{
		i = nra;
		nrb -= nra;
	}
	return (*c_rb = nrb, *c_ra = nra, i);
}

int	compare_rra_rrb(t_stack *a, t_stack *b, int nb, int *c_ra, int *c_rb)
{
	int	pos;
	int	to_reach;
	int	i; // nombre de rrr//
	int	nra;
	int	nrb;
	
	pos = find_pos(a, nb);
	to_reach = right_pos(b, nb);
	nra = count_rra(pos, a->size);
	nrb = count_rrb(to_reach, b->size);
	i = 0;
	if (c_ra == c_rb)
		i = nra;
	if (c_ra > c_rb)
	{
		i = nrb;
		nra -= nrb;
	}
	if (c_rb > c_ra)
	{
		i = nra;
		nrb -= nra;
	}
	return (*c_rb = nrb, *c_ra = nra, i);
}

