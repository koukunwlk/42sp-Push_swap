/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:27:08 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/11 20:01:55 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	free_stack(t_stack *stack)
{
	while (stack->next)
		stack = stack->next;
	while (stack->previous)
	{
		stack = stack->previous;
		free(stack->next);
	}
	free(stack);
	return (0);
}
