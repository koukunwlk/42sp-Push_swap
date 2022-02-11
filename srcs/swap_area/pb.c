/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:41:06 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/11 16:30:30 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb_op(t_stack **stack_a, t_stack **stack_b, int flag)
{
	if ((*stack_b) == NULL)
	{
		(*stack_a) = (*stack_a)->next;
		*stack_b = (*stack_a)->previous;
		(*stack_b)->next = NULL;
		(*stack_b)->previous = NULL;
		(*stack_a)->previous = NULL;
		if (!flag)
			write(1, "pb\n", 3);
		return ;
	}
	(*stack_b)->previous = *stack_a;
	(*stack_a) = (*stack_a)->next;
	if(*stack_a)
		(*stack_a)->previous = NULL;
	(*stack_b)->previous->next = *stack_b;
	(*stack_b)->previous->previous = NULL;
	*stack_b = (*stack_b)->previous;
	if (!flag)
		write(1, "pb\n", 3);
}
