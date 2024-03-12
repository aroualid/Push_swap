/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 11:36:00 by aroualid          #+#    #+#             */
/*   Updated: 2024/03/12 00:41:15 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sb(t_stack *b)
{
	if (b->size < 2)
		return ;
	ft_swap(&b->data[0], &b->data[1]);
	write(1, "sb\n", 3);
}

void	ft_pa(t_stack *b, t_stack *a)
{
	int	temp;
	int	i;

	i = 0;
	temp = b->data[0];
	while (i < b->size - 1)
	{
		b->data[i] = b->data[i + 1];
		i++;
	}
	b->size--;
	a->size++;
	i = a->size;
	while (i > 0)
	{
		a->data[i] = a->data[i - 1];
		i--;
	}
	a->data[0] = temp;
	write (1, "pa\n", 3);
}

void	ft_rb(t_stack *b, bool print)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	j = b->size - 1;
	while (i < j)
	{
		temp = b->data[i];
		b->data[i] = b->data[j];
		b->data[j] = temp;
		j--;
	}
	if (print)
		write(1, "rb\n", 3);
}

void	ft_rrb(t_stack *b, bool print)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	j = b->size - 1;
	while (i < b->size -1)
	{
		temp = b->data[j];
		b->data[j] = b->data[i];
		b->data[i] = temp;
		i++;
	}
	if (print)
		write(1, "rrb\n", 4);
}
