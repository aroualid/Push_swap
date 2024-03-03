/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 13:36:27 by aroualid          #+#    #+#             */
/*   Updated: 2024/03/03 18:31:29 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void	apply_action(t_stack *a, t_stack *b, int nb, nb_move *c)
{
	int	ra_rb;
	int	rra_rrb;
	int	rra_rb;
	int	ra_rrb;
	int	min;

	min = min_move(a, b, nb);
	ra_rb = count_ra_rb(a, b, nb);
	rra_rrb = count_rra_rrb(a, b, nb);
	rra_rb = count_rra_rb(a, b, nb);
	ra_rrb = count_ra_rrb(a, b, nb);
	if (min == ra_rb)
		apply_ra_rb(a, b, nb, c);
	if (min == rra_rrb)
		apply_rra_rrb(a, b, nb, c);
}

void	apply_ra_rb(t_stack *a, t_stack *b, int nb, nb_move *c)
{
	int	nra;
	int	nrb;
	int res;
	
	nra = c->c_ra;
	nrb = c->c_rb;
	res = compare_ra_rb(a, b, nb, c);
	while (res > 0)
	{
		ft_rr(a, b);
		res--;
	}
	while (nra > 0)
	{
		ft_ra(a);
		nra--;
	}
	while (nrb > 0)
	{
		ft_rb(b);
		nrb--;
	}
	if (res == 0 && nra == 0 && nrb == 0)
		ft_pb(a, b);
}

void	apply_rra_rrb(t_stack *a, t_stack *b, int nb, nb_move *c)
{
	int	nra;
	int	nrb;
	int res;
	
	nra = c->c_rra;
	nrb = c->c_rrb;
	res = compare_rra_rrb(a, b, nb, c);
	while (res > 0)
	{
		ft_rrr(a, b);
		res--;
	}
	while (nra > 0)
	{
		ft_rra(a);
		nra--;
	}
	while (nrb > 0)
	{
		ft_rrb(b);
		nrb--;
	}
	if (res == 0 && nra == 0 && nrb == 0)
		ft_pb(a, b);
}
