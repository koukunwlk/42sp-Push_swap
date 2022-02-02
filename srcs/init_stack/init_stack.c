/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 01:22:33 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/02 12:13:02 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*init_stack()
{
	t_stack *stack;
	stack = (t_stack *)malloc(sizeof(t_stack));
	stack->previous = NULL;
	stack->next = NULL;
	return (stack);
}