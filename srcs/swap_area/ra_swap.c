/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 17:26:34 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/01/29 18:10:07 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra_op(t_stack *stack)
{
	int	top;
	int	first;

	first = stack->numbers[stack->top];
	top = stack->top;
	while (top)
	{
		stack->numbers[top] = stack->numbers[top - 1];
		top--;
	}
	stack->numbers[top] = first;
	write(1, "ra\n", 3);
}
