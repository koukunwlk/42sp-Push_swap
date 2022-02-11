/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:03:30 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/11 19:38:07 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	distance_to_top(t_stack *stack, int num)
{
	int	i;
	
	i = 0;
	while(stack)
	{
		if(stack->index == num)
			break;
		stack = stack->next;
		i++;
	}
	return (i);
}