/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:41:58 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/11 19:13:26 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_5(t_data *data)
{
	t_stack	*low;
	int		distance;

	while(stack_size(data->a) > 3)
	{
		low = find_lower(data->a);
		distance = distance_to_top(data->a, low->data);
		if (distance >= stack_size(data->a) / 2)
			rra_op(&data->a, 0);
		else if (distance < stack_size (data->a) / 2 && distance != 0)
			ra_op(&data->a, 0);
		if(distance == 0)
			pb_op(&data->a, &data->b, 0);
	}
	sort_3(data);
	while(data->b)
		pa_op(&data->a, &data->b, 0);
}