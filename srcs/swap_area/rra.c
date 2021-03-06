/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:38:47 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/02 19:43:06 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra_op(t_stack **stack, int flag)
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
		write(1, "rra\n", 4);
}
