/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:44:29 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/11 17:43:53 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void index_stack(t_stack *stack)
{
	int	min;
	int	max;
	int	j;
	t_stack *tmp;
	
	max = INT_MIN;
	j = 0;
	tmp = stack;
	while(j <= stack_size(stack))
	{
		min = INT_MAX;
		while (stack)
		{
			if (stack->data <= min && stack->data > max)
			{
				min = stack->data;
				stack->index = j;
			}
			stack = stack->next;
		}
		j++;
		max = min;
		stack = tmp;
	}
}