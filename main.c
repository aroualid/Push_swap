/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:32:12 by aroualid          #+#    #+#             */
/*   Updated: 2024/03/12 14:29:48 by aroualid         ###   ########.fr       */
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
		return (1);
	else if (pars(a->data, ac, av) == false)
		return (false);
	if (j == 2)
		two_arg(a);
	else if (j == 3)
		three_arg(a);
	else
		apply_sort(a, b);
	free(str);
	free(a->data);
	free(b->data);
	free(a);
	free(b);

}
