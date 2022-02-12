/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_bigger_in_group.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 16:32:52 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/12 19:03:09 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*find_bigger_in_group(t_stack *stack, int index)
{
	t_stack	*bigger;

	while (stack)
	{
		if (stack->index == index)
			bigger = stack;
		stack = stack->next;
	}
	return (bigger);
}
