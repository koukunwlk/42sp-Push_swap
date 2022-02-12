/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_bigger.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:51:18 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/12 14:49:20 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *find_bigger(t_stack *stack)
{
	t_stack *bigger;
	int		max;

	max = 0;
	while(stack)
	{
		if(stack->index > max)
		{
			bigger = stack;	
			max = stack->index;
		}
		stack = stack->next;
	}
	return (bigger);
}