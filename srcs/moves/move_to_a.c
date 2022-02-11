/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 17:29:25 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/11 16:41:34 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void move_to_a(t_data *data, t_stack *stack)
{
	int distance;
	distance = distance_to_top(data->b, stack->data);
	if(distance == 0)
	{
		pa_op(&data->a, &data->b, 0);
		return ;
	}
	while(distance)
	{
		distance = distance_to_top(data->b, stack->data);
		if (distance >= stack_size(data->b) / 2)
			rrb_op(&data->b, 0);
		else if (distance < stack_size (data->b) / 2 && distance != 0)
			rb_op(&data->b, 0);
		if(distance == 0)
			pa_op(&data->a, &data->b, 0);
	}
}