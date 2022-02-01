/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   booblesort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:22:05 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/01 13:04:47 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*booble_sort(int *stack, int size)
{
	int	swap;
	int	i;
	int	x;

	i = 0;
	while (i < size)
	{
		x = i;
		while (x < size)
		{
			if (stack[i] > stack[x])
			{
				swap = stack[i];
				stack[i] = stack[x];
				stack[x] = swap;
			}
			x++;
		}
		i++;
	}
	return (stack);
}
