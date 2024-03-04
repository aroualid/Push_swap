/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 11:34:20 by aroualid          #+#    #+#             */
/*   Updated: 2024/03/04 13:15:10 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_stack *a)
{
	if (a->size < 2)
		return ;
	ft_swap(&a->data[0], &a->data[1]);
	write(1, "sa\n", 3);
}

void	ft_pb(t_stack *a, t_stack *b)
{
	int	temp;
	int	i;

	i = 0;
	temp = a->data[0];
	while (i < a->size - 1)
	{
		a->data[i] = a->data[i+1];
		i++;
	}
	a->size--;
	b->size++;
	i = b->size;
	while (i > 0)
	{
		b->data[i] = b->data[i - 1];
		i--;
	}
	b->data[0] = temp;
	write (1, "pb\n", 3);
}

void	ft_ra(t_stack *a, bool print)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	j = a->size - 1;
	while (i < j)
	{
		temp = a->data[i];
		a->data[i] = a->data[j];
		a->data[j] = temp;
		j--;
	}
	if (print)
		write(1, "ra\n", 3);
}

void	ft_rra(t_stack *a, bool print)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	j = a->size - 1;
	while (i < a->size -1)
	{
		temp = a->data[j];
		a->data[j] = a->data[i];
		a->data[i] = temp;
		i++;
	}
	if (print)
		write(1, "rra\n", 4);
}
