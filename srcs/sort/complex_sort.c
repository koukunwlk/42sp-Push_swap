/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:06:44 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/01 13:20:18 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	select_push_pt2(t_stack *stack_a, t_stack *stack_b, int max)
{
	int	next_low;

	while (stack_a->top > 2)
	{
		if (stack_a->numbers[stack_a->top] > max
			&& stack_a->numbers[stack_a->top] != stack_a->high
			&& stack_a->numbers[stack_a->top] != stack_a->low)
			pb_op(stack_b, stack_a);
		else
		{
			next_low = find_next_low(stack_a, max);
			if (next_low > stack_a->top / 2)
				ra_op(stack_a);
			else
				rra_op(stack_a);
		}
	}
}

void	select_push(t_stack *stack_a, t_stack *stack_b, int max)
{
	int	i;
	int	next_low;

	next_low = 0;
	i = (stack_a->size / 2);
	stack_a->high = find_higher(stack_a);
	stack_a->low = find_lower(stack_a);
	while (stack_a->top > i)
	{
		if (stack_a->numbers[stack_a->top] < max
			&& stack_a->numbers[stack_a->top] != stack_a->high
			&& stack_a->numbers[stack_a->top] != stack_a->low)
			pb_op(stack_b, stack_a);
		else
		{
			next_low = find_next_low(stack_a, max);
			if (next_low > stack_a->top / 2)
				ra_op(stack_a);
			else
				rra_op(stack_a);
		}
	}
	select_push_pt2(stack_a, stack_b, max);
}

void	put_in_top(t_stack *stack_a, t_stack *stack_b, int top_a, int top_b)
{
	int	index_a;
	int	index_b;

	index_a = get_position(stack_a, top_a);
	index_b = get_position(stack_a, top_b);
	if (index_b > -1)
	{
		if (index_b >= stack_b->size / 2)
			while (stack_b->numbers[stack_b->top] != top_b)
				rb_op(stack_b);
		else
			while (stack_b->numbers[stack_b->top] != top_b)
				rrb_op(stack_b);
	}
	if (index_a > -1)
	{
		if (index_a >= stack_a->size / 2)
			while (stack_a->numbers[stack_a->top] != top_a)
				ra_op(stack_a);
		else
			while (stack_a->numbers[stack_a->top] != top_a)
				rra_op(stack_a);
	}
}

void	sort_b(t_stack *stack_a, t_stack *stack_b)
{
	int	pos;
	int	moves;
	int	aux_a;
	int	aux_b;
	int	i;

	pos = 0;
	i = 0;
	moves = INT_MAX;
	while (i <= stack_b->top)
	{
		aux_b = stack_b->numbers[i];
		pos = get_position(stack_a, aux_b);
		aux_a = stack_a->numbers[pos];
		if (moves_count(stack_a, aux_a) + moves_count(stack_b, aux_b) < moves)
		{
			stack_a->best_num = aux_a;
			stack_b->best_num = aux_b;
			moves = moves_count(stack_a, aux_a) + moves_count(stack_b, aux_b);
		}
		i++;
	}
	put_in_top(stack_a, stack_b, stack_a->best_num, stack_b->best_num);
}

void	complex_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	*ordered;
	int	range;
	int	i;
	int	size;
	int	size_range;

	size_range = stack_a->size / 2;
	ordered = create_sorted(ordered, stack_a);
	range = ordered[stack_a->size / 2];
	i = 0;
	size = find_lower(stack_a);
	select_push(stack_a, stack_b, range);
	while (stack_b->size)
	{
		sort_b(stack_a, stack_b);
		pa_op(stack_a, stack_b);
	}
	free(ordered);
}
