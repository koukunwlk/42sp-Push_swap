/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:18:54 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/01/30 16:21:38 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb_op(t_stack *stack_dst, t_stack *stack_src)
{
	stack_dst->size++;
	stack_src->size--;
	stack_dst->top++;
	stack_dst->numbers[stack_dst->top] = stack_src->numbers[stack_src->top];
	stack_src->top--;
	write(1, "pb\n", 3);
}