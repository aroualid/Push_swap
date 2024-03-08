/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 13:04:43 by aroualid          #+#    #+#             */
/*   Updated: 2024/03/08 18:23:12 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	apply_ra_rb(t_stack *a, t_stack*b, int nb)
{
	while (nb != a->data[0] && right_pos(b,nb) != 0)
		ft_rr(a, b);
	while (nb != a->data[0])
		ft_ra(a, 1);
	while (right_pos(b,nb) != 0)
		ft_rb(b, 1);
	ft_pb(a, b);
	printf("nb %d has been pushed\n", nb);
	return (-1);
}

int	apply_rra_rrb(t_stack *a, t_stack*b, int nb)
{
	while (nb != a->data[0] && right_pos(b,nb) != 0)
		ft_rrr(a, b);
	while (nb != a->data[0])
		ft_rra(a, 1);
	while (right_pos(b,nb) != 0)
		ft_rrb(b, 1);
	ft_pb(a, b);
	printf("nb %d has been pushed\n", nb);
	return (-1);
}

int	apply_rra_rb(t_stack *a, t_stack*b, int nb)
{
	while (nb != a->data[0])
		ft_rra(a, 1);
	while (right_pos(b,nb) != 0)
		ft_rb(b, 1);
	ft_pb(a, b);
	printf("nb %d has been pushed\n", nb);
	return (-1);
}

int	apply_ra_rrb(t_stack *a, t_stack*b, int nb)
{
	while (nb != a->data[0])
		ft_ra(a, 1);
	while (right_pos(b,nb) != 0)
		ft_rrb(b, 1);
	ft_pb(a, b);
	printf("nb %d has been pushed\n", nb);
	return (-1);
}

void	apply_sort(t_stack *a, t_stack *b)
{
	int	move;
	int i;
	while (a->size > 3)
	{
		i = 0;
		move = count_min_move(a, b);
		while (i != -1)
		{
			if (move == comb_ra_rb(a, b, a->data[i]))
				i = apply_ra_rb(a, b , a->data[i]);
			else if (move == comb_rra_rrb(a, b, a->data[i]))
				i = apply_rra_rrb(a, b , a->data[i]);
			else if (move == comb_rra_rb(a, b, a->data[i]))
				i = apply_rra_rb(a, b , a->data[i]);
			else if (move == comb_ra_rrb(a, b, a->data[i]))
				i = apply_ra_rrb(a, b , a->data[i]);
			else
				i++;
		}

	}
}
