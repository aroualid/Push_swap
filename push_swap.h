/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <ari@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:32:40 by aroualid          #+#    #+#             */
/*   Updated: 2024/02/27 00:03:15 by ari              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include "libft/libft.h"
# include <stdio.h>
# include <stdbool.h>
typedef struct t_stack

{
	int	*data;
	int	size;
}	t_stack;

void	ft_swap(int *a, int *b);
void	ft_sa(t_stack *a);
void	ft_pa(t_stack *a, t_stack *b);
void	ft_ra(t_stack *a);
void	ft_rra(t_stack *a);
void	ft_sb(t_stack *b);
void	ft_pb(t_stack *b, t_stack *a);
void	ft_rb(t_stack *b);
void	ft_rrb(t_stack *b);
void	ft_ss(t_stack *a, t_stack *b);
void	ft_rr(t_stack *a, t_stack *b);
void	ft_rrr(t_stack *a, t_stack *b);
int		is_quote(char *str);
int		count_arg_in_quote(char *av);
int		nb_of_quote(char *av);
int		size_to_malloc(int ac, char *av[]);
char	**check_arg(int	ac, char *av[], int *len);
int		check_if_no_digit(char **str);
int		*check_good_arg(char **str, int ac, char *av[]);
int		len_of_num(long	num);
int		check_overflow(long int num);
int		check_sort(int *num, int ac, char **str);
int		check_duplicate(int *num, int ac, char *av[]);
int		pars(int *num, int ac, char **str);
int		ft_strcmp(const char *s1, const char *s2);
int		check_empty_arguments(int ac, char **str);
#endif
