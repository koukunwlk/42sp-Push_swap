/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_lower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:04:41 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/03 18:17:10 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *find_lower(t_stack *stack)
{
	t_stack *lower;
	int		min;

	min = INT_MAX;
	while(stack)
	{
		if(stack->data < min)
		{
			lower = stack;
			min = stack->data;
		}
		stack = stack->next;
	}
	return (lower);
}