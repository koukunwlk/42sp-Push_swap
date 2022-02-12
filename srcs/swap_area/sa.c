/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:48:12 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/12 19:01:34 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa_op(t_stack **stack, int flag)
{
	(*stack)->previous = (*stack)->next;
	(*stack)->next = (*stack)->next->next;
	if ((*stack)->next)
		(*stack)->next->previous = *stack;
	(*stack)->previous->next = (*stack);
	(*stack)->previous->previous = NULL;
	(*stack) = (*stack)->previous;
	if (!flag)
		write(1, "sa\n", 3);
}
