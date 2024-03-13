/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:49:45 by aroualid          #+#    #+#             */
/*   Updated: 2024/03/13 17:10:40 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_func(char **str, t_stack *a, t_stack *b)
{
	free(str);
	free(a->data);
	free(b->data);
	free(a);
	free(b);
}

int	*free_arg(char **str, int *dtr)
{
	free(str);
	free(dtr);
	return (false);
}
