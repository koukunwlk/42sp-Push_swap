/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 17:03:30 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/01/30 16:31:21 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	middle_sort(t_stack *stack_a, t_stack *stack_b)
{
	while(stack_a->top > 2)
	{
		stack_a->low = find_lower(stack_a);
		if(stack_a->low_pos == stack_a->top - 1)
			sa_op(stack_a);
		else if (stack_a->low_pos == stack_a->top - 2)
		{
			ra_op(stack_a);
			ra_op(stack_a);
		}
		else if (stack_a->low_pos == 0)
			rra_op(stack_a);
		else if (stack_a->low_pos == 1)
		{
			rra_op(stack_a);
			rra_op(stack_a);
		}
		pb_op(stack_b, stack_a);
	}
	move_top_two(stack_a);
	while(stack_b->top > -1)
		pa_op(stack_a, stack_b);
}

void	simple_sort(t_stack *stack_a, t_stack *stack_b)
{
	stack_a->high = find_higher(stack_a);
	stack_a->low = find_lower(stack_a);
	if (stack_a->top == 2)
		move_top_two(stack_a);
	else if (stack_a->top >= 3 && stack_a->top <= 5)
		middle_sort(stack_a, stack_b);
}
