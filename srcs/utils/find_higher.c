/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_higher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 17:04:41 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/01/29 18:10:23 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_higher(t_stack *stack)
{
	int	i;
	int	higher;

	higher = stack->numbers[0];
	stack->high = higher;
	stack->high_pos = 0;
	i = 0;
	while (i <= stack->top)
	{
		if (stack->numbers[i] > higher)
		{
			higher = stack->numbers[i];
			stack->high_pos = i;
		}
		i++;
	}
	return (higher);
}
