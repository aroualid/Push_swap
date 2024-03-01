/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_2_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:49:08 by aroualid          #+#    #+#             */
/*   Updated: 2024/03/01 13:17:57 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	two_arg(t_stack *a)
{
	if(a->data[0] > a->data[1])
		ft_sa(a);
}

void	two_arg_in_b(t_stack *a, t_stack *b)
{
	ft_pb(a, b);
	ft_pb(a, b);
	ft_sb(b);
	ft_pa(b, a);
	ft_pa(b, a);
}
