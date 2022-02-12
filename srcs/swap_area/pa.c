/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:03:28 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/12 19:01:06 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa_op(t_stack **stack_a, t_stack **stack_b, int flag)
{
	if (*stack_b == NULL)
		return ;
	if ((*stack_a) == NULL)
	{
		(*stack_b) = (*stack_b)->next;
		*stack_a = (*stack_b)->previous;
		(*stack_a)->next = NULL;
		(*stack_a)->previous = NULL;
		(*stack_b)->previous = NULL;
		if (!flag)
			write(1, "pa\n", 3);
		return ;
	}
	(*stack_a)->previous = *stack_b;
	(*stack_b) = (*stack_b)->next;
	if (*stack_b)
		(*stack_b)->previous = NULL;
	(*stack_a)->previous->next = *stack_a;
	(*stack_a)->previous->previous = NULL;
	*stack_a = (*stack_a)->previous;
	if (!flag)
		write(1, "pa\n", 3);
}
