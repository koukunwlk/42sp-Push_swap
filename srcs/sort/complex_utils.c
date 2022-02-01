/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:12:17 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/01 13:08:53 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	set_range(t_stack *stack_a, int size_range)
{
	size_range = 20;
	if (stack_a->size >= 400)
		size_range = 45;
	return (size_range);
}

int	*create_sorted(int *ordered, t_stack *stack_a)
{
	int	index;

	ordered = (int *)ft_calloc(sizeof(int *), stack_a->capacity);
	if (!ordered)
		return (NULL);
	index = 0;
	while (index < stack_a->size)
	{
		ordered[index] = stack_a->numbers[index];
		index++;
	}
	ordered = booble_sort(ordered, stack_a->size);
	return (ordered);
}

int	*create_range(int *ordered, int	*range, int size, t_stack *stack_a)
{
	int	index;
	int	i;

	range = (int *)ft_calloc(sizeof(int *), size);
	i = 0;
	index = 0;
	while (index <= stack_a->top)
	{
		if (ordered[index] % size == 0)
		{
			range[i] = ordered[index];
			i++;
		}
		index++;
	}
	return (range);
}

int	get_position(t_stack *stack, int value)
{
	int	i;

	i = 0;
	while (i <= stack->top)
	{
		if (stack->numbers[i] == value)
			return (i);
		i++;
	}
	return (INT_MAX);
}

int	moves_count(t_stack *stack, int value)
{
	int	moves;

	moves = get_position(stack, value);
	if (moves >= stack->top / 2)
		return (moves);
	else
		return ((stack->size + 1) - moves);
}
