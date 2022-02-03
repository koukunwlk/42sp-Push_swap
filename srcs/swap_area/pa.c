/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:03:28 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/02 19:40:59 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa_op(t_stack **stack_a, t_stack **stack_b, int flag)
{
	if (*stack_b == NULL)
		return ;
	(*stack_a)->previous = *stack_b;
	if (!((*stack_b)->next == NULL))
	{
		(*stack_b)->next->previous = NULL;
		(*stack_b)->previous = NULL;
	}
	*stack_b = (*stack_b)->next;
	(*stack_a)->previous->next = *stack_a;
	*stack_a = (*stack_a)->previous;
	write(1, "pa\n", 3);
}
