/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:43:38 by aroualid          #+#    #+#             */
/*   Updated: 2024/02/12 15:11:50 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <string.h>

typedef struct
{
	int	*data;
	int	size;
}	t_stack;

void	ft_sa(int* a)
{
	ft_swap(&a[0], &a[1]);
	write(1, "sa\n", 3);
}

void	ft_pa(t_stack *a, t_stack *b)
{
	int	temp;
	if (b->size == 0)
		return ;
	temp = b->data[0];
	memmove(b->data, b->data + 1, b->size);
	b->size--;
	memmove(a->data + 1, a->data, a->size);
	a->data[0] = temp;
	a->size++;
	write(1, "pa\n", 3); 
}

