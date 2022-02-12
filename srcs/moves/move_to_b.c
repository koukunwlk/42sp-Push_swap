/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 16:38:23 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/12 18:57:04 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_to_b(t_data *data, t_stack *stack)
{
	int	distance;

	if (stack == NULL)
		return ;
	distance = distance_to_top(data->a, stack->index);
	if (distance == 0)
	{
		pb_op(&data->a, &data->b, 0);
		return ;
	}
	while (distance)
	{
		distance = distance_to_top(data->a, stack->index);
		if (distance >= stack_size(data->a) / 2)
			rra_op(&data->a, 0);
		else if (distance < stack_size (data->a) / 2 && distance != 0)
			ra_op(&data->a, 0);
		if (distance == 0)
			pb_op(&data->a, &data->b, 0);
	}
}
