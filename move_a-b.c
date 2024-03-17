/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_a-b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 09:41:32 by aroualid          #+#    #+#             */
/*   Updated: 2024/03/18 00:39:33 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ss(t_stack *a, t_stack *b)
{
	if ((!a) || (!b))
		return ;
	ft_sa(a);
	ft_sb(b);
	write(1, BLK "ss\n" RST, 2);
}

void	ft_rr(t_stack *a, t_stack *b)
{
	ft_ra(a, 0);
	ft_rb(b, 0);
	write(1, UBLU "rr\n" RST, 2);
}

void	ft_rrr(t_stack *a, t_stack *b)
{
	ft_rra(a, 0);
	ft_rrb(b, 0);
	write(1, UGRN "rrr\n" RST, 3);
}
