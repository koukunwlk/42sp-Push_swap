/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 14:01:18 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/01/28 15:41:59 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_range(int argc, char **argv)
{
	int	size;

	size = argc - 1;
	while (size)
	{
		if (ft_atoi(argv[size]) < INT_MIN || ft_atoi(argv[size]) > INT_MAX)
			return (FALSE);
		size--;
	}
	return (TRUE);
}
