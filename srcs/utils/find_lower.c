/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_lower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 17:12:37 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/01/29 18:10:29 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_lower(t_stack *stack)
{
	int	i;
	int	smaller;

	smaller = stack->numbers[stack->top];
	stack->low = smaller;
	stack->low_pos = stack->top;
	i = 0;
	while (i <= stack->top)
	{
		if (stack->numbers[i] < smaller)
		{
			smaller = stack->numbers[i];
			stack->low_pos = i;
		}
		i++;
	}
	return (smaller);
}

int	find_next_low(t_stack *stack, int max)
{
	int	pos;

	stack->high = find_higher(stack);
	stack->low = find_lower(stack);
	pos = stack->top;
	while (pos > -1)
	{
		if (stack->numbers[pos] < max
			&& pos != stack->high
			&& pos != stack->low_pos)
			return (pos);
		pos--;
	}
	return (pos);
}
