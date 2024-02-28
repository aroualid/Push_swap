/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <ari@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:32:12 by aroualid          #+#    #+#             */
/*   Updated: 2024/02/28 13:18:16 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	char	**str = NULL;
	t_stack	*stack_a = malloc(sizeof (t_stack));
	//int		*stack_b = NULL;
	int		j = 0;
	//int		i = 0;

	
	str = check_arg(ac, av, &j);
	stack_a->size = j;
	stack_a->data = check_good_arg(ac, av);
    if (stack_a->data == NULL)
        return (1);
    else
    {
		if (pars(stack_a->data, ac, av) == false)
			return (false);
		if (j == 2)
			two_arg(stack_a);
		/*else
		{
			while (i < j)
			{
				printf("%d\n", stack_a[i]);
				i++;
			}
		}*/
	}
}
