/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_sort_in_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 01:57:01 by aroualid          #+#    #+#             */
/*   Updated: 2024/03/10 02:56:14 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	apply_ra_rb_in_a(t_stack *a, t_stack*b, int nb)
{
	while (nb != b->data[0] && right_pos_in_a(a,nb) != 0)
		ft_rr(a, b);
	while (nb != b->data[0])
		ft_rb(b, 1);
	while (right_pos_in_a(a,nb) != 0)
		ft_ra(b, 1);
	ft_pa(b, a);
	return (-1);
}

int	apply_rra_rrb_in_a(t_stack *a, t_stack*b, int nb)
{
	while (nb != b->data[0] && right_pos_in_a(a,nb) != 0)
		ft_rrr(a, b);
	while (nb != b->data[0])
		ft_rrb(b, 1);
	while (right_pos_in_a(a,nb) != 0)
		ft_rra(a, 1);
	ft_pa(b, a);
	return (-1);
}

int	apply_rrb_ra_in_a(t_stack *a, t_stack*b, int nb)
{
	while (nb != b->data[0])
		ft_rrb(b, 1);
	while (right_pos_in_a(a,nb) != 0)
		ft_ra(a, 1);
	ft_pa(b, a);
	return (-1);
}

int	apply_rb_rra_in_a(t_stack *a, t_stack*b, int nb)
{
	while (nb != b->data[0])
	{
		ft_rb(b, 1);
	}
	while (right_pos_in_a(a,nb) != 0)
		ft_rra(b, 1);
	ft_pa(b, a);
	return (-1);
}

void	apply_sort_in_a(t_stack *a, t_stack *b)
{
	int	move;
	int i;
	while (b->size > 0)
	{
		i = 0;
		move = count_min_move_a(a, b);
		while (i != -1)
		{
			if (move == comb_ra_rb_a(a, b, b->data[i]))
				i = apply_ra_rb_in_a(a, b , b->data[i]);
			else if (move == comb_rra_rrb_a(a, b, b->data[i]))
				i = apply_rra_rrb_in_a(a, b , b->data[i]);
			else if (move == comb_rrb_ra_a(a, b, b->data[i]))
				i = apply_rrb_ra_in_a(a, b , b->data[i]);
			else if (move == comb_rb_rra_a(a, b, b->data[i]))
				i = apply_rb_rra_in_a(a, b , b->data[i]);
			else
				i++;
		}

	}
}
