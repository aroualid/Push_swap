/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 01:57:59 by aroualid          #+#    #+#             */
/*   Updated: 2024/03/13 16:58:46 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	put_first_on_top(t_stack *a)
{
	int	i;
	int	num;

	num = a->data[minus(a)];
	i = a->size / 2;
	if (minus(a) > i)
	{
		while (a->data[0] != num)
			ft_rra(a, 1);
	}
	else
	{
		while (a->data[0] != num)
			ft_ra(a, 1);
	}
}

void	apply_sort(t_stack *a, t_stack *b, int j)
{
	if (j == 2)
		two_arg(a);
	else if (j == 3)
		three_arg(a);
	else
	{
		push_two(a, b);
		apply_sort_in_b(a, b);
		three_arg(a);
		apply_sort_in_a(a, b);
		put_first_on_top(a);
	}
}
