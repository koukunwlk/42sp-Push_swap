/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 19:14:08 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/02 19:42:30 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb_op(t_stack **stack, int flag)
{
	t_stack	*tmp;

	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = *stack;
	(*stack)->previous = tmp;
	*stack = (*stack)->next;
	(*stack)->previous->next = NULL;
	(*stack)->previous = NULL;
	if (!flag)
		write(1, "rb\n", 3);
}
