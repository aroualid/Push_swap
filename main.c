/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:29:42 by aroualid          #+#    #+#             */
/*   Updated: 2024/02/05 16:03:19 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
	int		content;
	struct 	s_list* next;

}t_list;

t_list*	ft_lst_new(int content)
{
	t_list*	new;

	new = malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL); 
	new->content = content;
	new->next = NULL;
	return (new);
}

void	ft_list_add_back(t_list** lst, t_list* new)
{
	t_list	*current;
	t_list	*previous;	

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	current = *lst;
	while (current) 
	{
		previous = current;
		current = current->next; 
	}
	previous->next = new;
}

t_list* ft_test(int ac, char **av)
{
	int i = 1;
	t_list* temp;
	t_list* lst;
	
	lst = NULL;
	while (i < ac)
	{
		temp = ft_lst_new(atoi(av[i]));
		ft_list_add_back(&lst, temp);
		i++;
	}
	return (lst);
}
int	main(int argc, char **argv)
{
	t_list	*list = ft_test(argc, argv);
	t_list	*current = list;
	while (current)
	{
		printf("%d -> ", current->content);
		current = current->next;
	}
	printf("%s\n", (char *)current);
}