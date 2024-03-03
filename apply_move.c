/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 13:36:27 by aroualid          #+#    #+#             */
/*   Updated: 2024/03/03 18:03:02 by aroualid         ###   ########.fr       */
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
	
	nra = count_ra(find_pos(a, nb));
	nrb = count_rb(right_pos(b, nb));
	res = compare_ra_rb(a, b, nb, c);
	if (res + nra + nrb == min_move(a, b, nb))
	{
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
	}
}

void	apply_rra_rrb(t_stack *a, t_stack *b, int nb, nb_move *c)
{
	int	nra;
	int	nrb;
	int res;
	
	nra = count_rra(find_pos(a, nb), a->size);
	nrb = count_rrb(right_pos(b, nb), b->size);
	res = compare_rra_rrb(a, b, nb, c);
	if (res + nra + nrb == min_move(a, b, nb))
	{
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
	}
}
