/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 13:36:27 by aroualid          #+#    #+#             */
/*   Updated: 2024/03/05 16:18:42 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	apply_ra_rb(t_stack *a, t_stack *b, int nb, nb_move *c)
{
	int	nra;
	int	nrb;
	int res;
	
	compare_ra_rb(a, b, nb, c);
	nra = c->c_ra;
	nrb = c->c_rb;
	res = c->c_rr;
	while (res > 0)
	{
		ft_rr(a, b);
		res--;
	}
	while (nra > 0)
	{
		ft_ra(a, 1);
		nra--;
	}
	while (nrb > 0)
	{
		ft_rb(b, 1);
		nrb--;
	}
	if (res == 0 && nra == 0 && nrb == 0)
	{
		printf("pb de %d\n", nb);
		ft_pb(a, b);
	}
}

void	apply_rra_rrb(t_stack *a, t_stack *b, int nb, nb_move *c)
{
	int	nra;
	int	nrb;
	int res;
	
	compare_rra_rrb(a, b, nb, c);
	nra = c->c_rra;
	nrb = c->c_rrb;
	res = c->c_rrr;
	while (res > 0)
	{
		ft_rrr(a, b);
		res--;
	}
	while (nra > 0)
	{
		ft_rra(a, 1);
		nra--;
	}
	while (nrb > 0)
	{
		ft_rrb(b, 1);
		nrb--;
	}
	if (res == 0 && nra == 0 && nrb == 0)
	{
		printf("pb de %d\n", nb);
		ft_pb(a, b);
	}

}

void	apply_ra_rrb(t_stack *a, t_stack *b, int nb, nb_move *c)
{
	int	nra;
	int	nrb;

	compare_ra_rrb(a, b, nb, c);
	nra = c->c_ra;
	nrb = c->c_rrb;
	while (nra > 0)
	{
		ft_ra(a, 1);
		nra--;
	}
	while (nrb > 0)
	{
		ft_rrb(b, 1);
		nrb--;
	}
	if (nra == 0 && nrb == 0)
	{
		printf("pb de %d\n", nb);
		ft_pb(a, b);
	}
	
}

void	apply_rra_rb(t_stack *a, t_stack *b, int nb, nb_move *c)
{
	int	nra;
	int	nrb;
	
	compare_rra_rb(a, b, nb, c);
	nra = c->c_rra;
	nrb = c->c_rb;
	while (nra > 0)
	{
		ft_rra(a, 1);
		nra--;
	}
	while (nrb > 0)
	{
		ft_rb(b, 1);
		nrb--;
	}
	if (nra == 0 && nrb == 0)
	{
		printf("pb de %d\n", nb);
		ft_pb(a, b);
	}
}
