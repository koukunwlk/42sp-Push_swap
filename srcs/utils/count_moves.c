/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:03:30 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/04 16:06:05 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	distance_to_top(t_stack *stack, int num)
{
	int	len_stack;
	int	i;
	
	i = 0;
	len_stack = stack_size(stack);
	while(stack)
	{
		if(stack->data == num)
			break;
		stack = stack->next;
		i++;
	}
	return (i);
}