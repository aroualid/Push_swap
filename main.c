/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:32:12 by aroualid          #+#    #+#             */
/*   Updated: 2024/03/04 11:44:08 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	char	**str = NULL;
	t_stack	*stack_a = ft_calloc(sizeof (t_stack), 1);
	t_stack	*stack_b = ft_calloc(sizeof (t_stack), 1);
	nb_move *c = ft_calloc (sizeof (nb_move),  6);
	int		j = 0;
	int		k = 0;
	int		i = 0;
	int		min = 0;
	
	str = check_arg(ac, av, &j);
	stack_a->size = j;
	stack_b->size = 0;
	stack_a->data = check_good_arg(ac, av);
	stack_b->data = ft_calloc(sizeof (int), j);
    
	push_two(stack_a, stack_b);
	for (int n = 0; n < stack_a->size; n++)
	{
		printf("[%d]",right_pos(stack_b, stack_a->data[n]));
	}
	printf ("\nnombre de move : \n");
	for (int n = 0; n < stack_a->size; n++)
	{
		printf("[%d]",min_move(stack_a, stack_b, stack_a->data[n]));
	}
	printf ("\n");
	while (k < stack_a->size)
	{
		printf("[%d]", stack_a->data[k]);
		k++;
	}
	k = 0;
	printf ("\n");
	while (i < stack_a->size)
	{
		min = find_pos(stack_a, min_move(stack_a, stack_b, stack_a->data[i]));
		apply_action(stack_a, stack_b, stack_a->data[min], c);
		i++;
	}
	printf("\nstack_a\n");
	while (k < stack_a->size)
	{
		printf("[%d]", stack_a->data[k]);
		k++;
	}
	k = 0;
	printf("\n##############\n");
	printf ("stack_b\n");
	while (k < stack_b->size)
	{
		printf("[%d]", stack_b->data[k]);
		k++;
	}
	printf("\n##############\n");

}
