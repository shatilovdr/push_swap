/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 12:13:35 by dshatilo          #+#    #+#             */
/*   Updated: 2023/12/11 11:07:46 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack_operations.h"

int	sa(t_list **lst)
{
	swap(lst);
	return (ft_printf("sa\n") == -1);
}

int	pa(t_list **lst_a, t_list **lst_b)
{
	push(lst_a, lst_b);
	return (ft_printf("pa\n") == -1);
}

int	ra(t_list **lst)
{
	rotate(lst);
	return (ft_printf("ra\n") == -1);
}

int	rra(t_list **lst)
{
	reverse_rotate(lst);
	return (ft_printf("rra\n") == -1);
}

int	apply_same_time(char *mode, t_list **lst1, t_list **lst2)
{
	void	(*f)(t_list **);
	int		res;

	if (!ft_strncmp(mode, "ss", 3))
	{
		f = swap;
		res = ft_printf("ss\n");
	}
	else if (!ft_strncmp(mode, "rrr", 3))
	{
		f = reverse_rotate;
		res = ft_printf("rrr\n");
	}
	else if (!ft_strncmp(mode, "rr", 3))
	{
		f = rotate;
		res = ft_printf("rr\n");
	}
	else
		return (1);
	if (res == -1)
		return (1);
	f(lst1);
	f(lst2);
	return (0);
}
