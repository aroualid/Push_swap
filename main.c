/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:32:12 by aroualid          #+#    #+#             */
/*   Updated: 2024/03/15 23:56:39 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	char				**str;
	t_stack				*a;
	t_stack				*b;
	int					j;

	str = NULL;
	a = ft_calloc(sizeof(t_stack), 1);
	b = ft_calloc(sizeof(t_stack), 1);
	if (!a || !b)
		return (0);
	j = 0;
	str = check_arg(ac, av, &j);
	if (!str)
		return (0);
	a->size = j;
	b->size = 0;
	a->data = check_good_arg(ac, av);
	b->data = ft_calloc(sizeof(int), j);
	if (a->data == NULL || !b->data)
		return (free_func(str, a, b), 0);
	else if (pars(a->data, ac, av) == false)
		return (free_func(str, a, b), 0);
	apply_sort(a, b, j);
	free_func(str, a, b);
}
