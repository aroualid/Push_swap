/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 11:36:00 by aroualid          #+#    #+#             */
/*   Updated: 2024/02/16 11:50:35 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sb(t_stack *b)
{
	if (b->size <= 2)
		return ;
	ft_swap(&b->data[0], &b->data[1]);
	write(1, "sb\n", 3);
}

void	ft_pb(t_stack *b, t_stack *a)
{
	int	temp;

	if (a->size == 0)
		return ;
	temp = a->data[0];
	ft_memmove(a->data, a->data + 1, a->size);
	a->size--;
	ft_memmove(b->data + 1, b->data, b->size);
	b->data[0] = temp;
	b->size++;
	write(1, "pb\n", 3);
}

void	ft_rb(t_stack *b)
{
	int	temp;

	temp = b->data[0];
	ft_memmove(b->data, b->data + 1, b->size - 1);
	b->data[b->size - 1] = temp;
	write(1, "rb\n", 3);
}

void	ft_rrb(t_stack *b)
{
	int	temp;

	temp = b->data[b->size - 1];
	ft_memmove(b->data + 1, b->data, b->size - 1);
	b->data[0] = temp;
	write(1, "rrb\n", 4);
}
