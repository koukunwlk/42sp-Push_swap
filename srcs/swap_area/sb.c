/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:23:13 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/02 19:44:48 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb_op(t_stack **stack, int flag)
{
	(*stack)->previous = (*stack)->next;
	(*stack)->next = (*stack)->next->next;
	(*stack)->next->previous = *stack;
	(*stack)->previous->next = (*stack);
	(*stack)->previous->previous = NULL;
	(*stack) = (*stack)->previous;
	if (!flag)
		write(1, "sb\n", 3);
}
