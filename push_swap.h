/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:32:32 by dshatilo          #+#    #+#             */
/*   Updated: 2023/12/02 18:49:13 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

int		*check_argv(int argc, char *argv[]);
t_list	*create_list(int *arr, int length);
void	swap(t_list **lst);
void	sswap(t_list **lst1, t_list **lst2);

#endif