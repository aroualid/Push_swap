/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:32:12 by aroualid          #+#    #+#             */
/*   Updated: 2024/03/13 17:28:22 by aroualid         ###   ########.fr       */
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
	j = 0;
	str = check_arg(ac, av, &j);
	a->size = j;
	b->size = 0;
	a->data = check_good_arg(ac, av);
	b->data = ft_calloc(sizeof(int), j);
	if (a->data == NULL)
		return (free_func(str, a, b), 1);
	else if (pars(a->data, ac, av) == false)
		return (free_func(str, a, b), false);
	apply_sort(a, b, j);
	free_func(str, a, b);
}
