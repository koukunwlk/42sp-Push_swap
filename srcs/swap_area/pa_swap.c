/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:22:52 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/01/30 16:24:43 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa_op(t_stack *stack_dst, t_stack *stack_src)
{
	stack_dst->size++;
	stack_dst->top++;
	stack_dst->numbers[stack_dst->top] = stack_src->numbers[stack_src->top];
	stack_src->size--;
	stack_src->top--;
	write(1, "pa\n", 3);
}