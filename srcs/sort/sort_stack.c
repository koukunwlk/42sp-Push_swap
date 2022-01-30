/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 12:10:24 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/01/29 18:09:37 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->top < 2)
		sa_op(stack_a);
	else if (stack_a->top >= 2 && stack_a->top <= 5)
		simple_sort(stack_a, stack_b);
}
