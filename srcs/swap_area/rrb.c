/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 19:18:51 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/02 19:43:18 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb_op(t_stack **stack, int flag)
{
	t_stack	*last;

	last = *stack;
	while (last->next)
		last = last->next;
	last->previous->next = NULL;
	last->previous = NULL;
	last->next = *stack;
	(*stack)->previous = last;
	*stack = last;
	if (!flag)
		write(1, "rrb\n", 4);
}
