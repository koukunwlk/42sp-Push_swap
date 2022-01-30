/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_stacks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 16:56:07 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/01/29 18:08:52 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	destroy_stacks(t_stack *stack_a, t_stack *stack_b)
{
	free(stack_a->numbers);
	stack_a->numbers = NULL;
	free(stack_a);
	free(stack_b->numbers);
	stack_b->numbers = NULL;
	free(stack_b);
}
