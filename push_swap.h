/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:32:32 by dshatilo          #+#    #+#             */
/*   Updated: 2023/12/08 18:54:34 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>
#include <time.h> //REMOVE ME!!!

typedef struct s_moves
{
	int		a_u;
	int		a_d;
	int		b_u;
	int		b_d;
	int		result;
	short	direction;
}	t_moves;

int		*check_argv(int argc, char *argv[]);
t_list	*create_list(int *arr, int length);
void	sa(t_list **lst);
void	pa(t_list **lst_a, t_list **lst_b);
void	ra(t_list **lst);
void	rra(t_list **lst);
void	sb(t_list **lst);
void	pb(t_list **lst_a, t_list **lst_b);
void	rb(t_list **lst);
void	rrb(t_list **lst);
void	apply_same_time(char *mode, t_list **lst1, t_list **lst2);

t_list	*get_pos(t_list *lst_1, t_list *lst_2);
t_list	*small_sort(t_list **plst);


#endif