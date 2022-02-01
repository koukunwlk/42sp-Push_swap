/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:22:00 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/01 13:10:14 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb_op(t_stack *stack)
{
	int	top;
	int	first;

	first = stack->numbers[stack->top];
	top = stack->top;
	while (top > 0)
	{
		stack->numbers[top] = stack->numbers[top - 1];
		top--;
	}
	stack->numbers[top] = first;
	write(1, "rb\n", 3);
}
