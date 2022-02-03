/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:28:04 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/02 19:42:06 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra_op(t_stack **stack, int flag)
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
		write(1, "ra\n", 3);
}
