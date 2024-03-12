/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_3_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:32:33 by aroualid          #+#    #+#             */
/*   Updated: 2024/03/12 00:41:26 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_arg(t_stack *a)
{
	int	top;
	int	mid;
	int	bot;

	top = a->data[0];
	mid = a->data[1];
	bot = a->data[2];
	if (top > mid && mid < bot && bot > top)
		ft_sa(a);
	if (top > mid && mid > bot && bot < top)
	{
		ft_sa(a);
		ft_rra(a, 1);
	}
	if (top > mid && mid < bot && bot < top)
		ft_ra(a, 1);
	if (top < mid && mid > bot && bot > top)
	{
		ft_sa(a);
		ft_ra(a, 1);
	}
	if (top < mid && mid > bot && bot < top)
		ft_rra(a, 1);
}
