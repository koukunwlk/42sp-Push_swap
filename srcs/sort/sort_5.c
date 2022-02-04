/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:41:58 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/04 16:43:58 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_5(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*low;
	int		distance;
	low = find_lower(stack_a);
	distance = distance_to_top(stack_a, low->data);
	if (distance > stack_size(stack_a) / 2)
	{
		printf("Distacnia: %d\n", distance);
		distance -= stack_size(stack_a);
		printf("execute %d rra\n", distance);
		printf("stack size: %d\n", stack_size(stack_a));
		printf("meio da stack size: %d\n", stack_size(stack_a) / 2);
	}
}