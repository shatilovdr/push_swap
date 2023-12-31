/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshatilo <dshatilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 22:50:23 by dshatilo          #+#    #+#             */
/*   Updated: 2023/12/26 15:59:15 by dshatilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_arg(char *arg, int *num);

int		check_duplicates(int len, int *args);

int	*check_argc(int *argc, char *argv[])
{
	int	*args_arr;

	if (*argc < 2)
		return (0);
	if (*argc == 2 && count_words(argv[1], ' ') > 1)
		args_arr = check_one_arg(argc, argv);
	else
		args_arr = check_argv(--(*argc), ++argv);
	if (!args_arr)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	return (args_arr);
}

int	*check_argv(int argc, char *argv[])
{
	int	i;
	int	*args;

	if (argc <= 0)
		return (NULL);
	args = (int *)malloc(sizeof(int) * (argc));
	if (!args)
		return (NULL);
	i = 0;
	while (i < argc)
	{
		if (check_arg(argv[i], &args[i]))
		{
			free (args);
			return (NULL);
		}
		i++;
	}
	if (check_duplicates(argc, args))
	{
		free (args);
		return (NULL);
	}
	return (args);
}

int	check_arg(char *arg, int *num)
{
	int	pos;

	pos = 0;
	if (arg[pos] == '+' || arg[pos] == '-')
		pos++;
	if (!arg[pos])
		return (1);
	while (arg[pos])
		if (!ft_isdigit(arg[pos++]))
			return (1);
	*num = ft_atoi(arg);
	pos--;
	if (*num == 0)
	{
		while (pos)
			if (arg[pos--] != '0')
				return (1);
		if (arg[pos] != '0' && arg[pos] != '+' && arg[pos] != '-')
			return (1);
	}
	return (0);
}

int	check_duplicates(int len, int *args)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < len)
	{
		while (i >= 0)
		{
			if (args[j] == args[i])
				return (1);
			i--;
		}
		i = j;
		j++;
	}
	return (0);
}
