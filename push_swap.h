/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:32:40 by aroualid          #+#    #+#             */
/*   Updated: 2024/03/03 18:09:48 by aroualid         ###   ########.fr       */
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

typedef struct nb_move
{
	int	c_ra;
	int	c_rb;
	int	c_rra;
	int	c_rrb;
}	nb_move;


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
char	**check_arg(int ac, char *av[], int *len);
int		check_if_no_digit(char **str);
int		*check_good_arg(int ac, char *av[]);
int		len_of_num(long num);
int		check_overflow(long int num);
int		check_sort(int *num, int ac, char **str);
int		check_duplicate(int *num, int ac, char *av[]);
int		pars(int *num, int ac, char **str);
int		ft_strcmp(const char *s1, const char *s2);
int		check_empty_arguments(int ac, char **str);
int		skip_zero(char *str);
int		check_over_under_int(int ac, char **av);
int		check_over_under_int(int ac, char **av);
int		ft_skip_zero(char *str);
int		ft_isspace(int c);
char	**ft_strtok(char *str, const char *delim);
void	two_arg(t_stack *a);
void	three_arg(t_stack *a);
void	two_arg_in_b(t_stack *a, t_stack *b);
void	push_two(t_stack *a, t_stack *b);
int		minus(t_stack *stack);
int		maxus(t_stack *stack);
int		right_pos(t_stack *b, int nb);
int		find_pos(t_stack *a, int nb);
int		count_ra_rb(t_stack *a, t_stack *b, int nb);
int		count_rra_rrb(t_stack *a, t_stack *b, int nb);
int		count_rra_rb(t_stack *a, t_stack *b, int nb);
int		count_ra_rrb(t_stack *a, t_stack *b, int nb);
int		min_move(t_stack *a, t_stack *b, int nb);
void	ret_to_move(t_stack *a, t_stack *b, int nb);
int		count_ra(int pos);
int		count_rra(int pos, int size);
int		count_rb(int pos);
int		count_rrb(int pos, int size);
int		compare_ra_rb(t_stack *a, t_stack *b, int nb, nb_move *c);
int		compare_rra_rrb(t_stack *a, t_stack *b, int nb, nb_move *c);
void	apply_action(t_stack *a, t_stack *b, int nb, nb_move *c);
void	apply_ra_rb(t_stack *a, t_stack *b, int nb, nb_move *c);
void	apply_rra_rrb(t_stack *a, t_stack *b, int nb, nb_move *c);
#endif
