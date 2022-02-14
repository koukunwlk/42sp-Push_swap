/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:21:39 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/14 18:58:03 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_num(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(str);
	while (i < len)
	{
		if (ft_isalpha(str[i]))
			return (FALSE);
		i++;
	}
	return (TRUE);
}

static int	has_duplicates(char *argv[], int argc)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (TRUE);
			j++;
		}
		i++;
	}
	return (FALSE);
}

static int	has_space(char *argv[], int argc)
{
	int	i;

	while (argc > 1)
	{
		i = 0;
		while (i < ft_strlen(argv[argc - 1]))
		{
			if (argv[argc - 1][i] == ' ' || argv[argc - 1][i] == '\t')
				return (TRUE);
			i++;
		}
		argc--;
	}
	return (FALSE);
}

int	validate_args(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc < 3)
		return (FALSE);
	if (has_space(argv, argc))
		return (FALSE);
	while (i < argc)
	{
		if (ft_atoli(argv[i]) > INT_MAX || ft_atoli(argv[i]) < INT_MIN)
			return (FALSE);
		i++;
	}
	if (has_duplicates(argv, argc))
		return (FALSE);
	while (--argc > 1)
		if (!is_num(argv[argc]))
			return (FALSE);
	return (TRUE);
}
