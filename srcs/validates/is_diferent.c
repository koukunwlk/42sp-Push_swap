/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_diferent.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:38:19 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/01/29 16:20:12 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_different(int argc, char **argv)
{
	int	size;
	int	pos;

	size = argc - 1;
	pos = size - 1;
	while (size > 0)
	{
		while (pos > 0)
		{
			if (ft_atoi(argv[size]) == ft_atoi(argv[pos]))
				return (FALSE);
			pos--;
		}
		size--;
		pos = size - 1;
	}
	return (TRUE);
}
