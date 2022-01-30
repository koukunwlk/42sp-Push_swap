/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_top_two.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 17:24:19 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/01/29 18:09:15 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_top_two(t_stack *stack_a)
{
	stack_a->high = find_higher(stack_a);
	stack_a->low = find_lower(stack_a);
	if (stack_a->high_pos == 2 && stack_a->low_pos == 0)
	{
		ra_op(stack_a);
		sa_op(stack_a);
	}
	else if (stack_a->high_pos == 2 && stack_a->low_pos == 1)
		ra_op(stack_a);
	else if (stack_a->high_pos == 1 && stack_a->low_pos == 0)
		rra_op(stack_a);
	else if (stack_a->high_pos == 1 && stack_a->low_pos == 2)
	{
		sa_op(stack_a);
		ra_op(stack_a);
	}
	else if (stack_a->high_pos == 0 && stack_a->low_pos == 1)
		sa_op(stack_a);
}
