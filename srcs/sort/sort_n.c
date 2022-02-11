/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_n.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:47:03 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/11 16:02:43 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int group_count(t_data *data)
{
	int i;
	int	stack_len;

	i = 0;
	stack_len = stack_size(data->a);
	while(stack_len)
	{
		stack_len /= 2;
		i++;
	}
	return (i);
}

void	sort_n(t_data *data)
{
	t_stack *nearest_in_group;
	int		group;

	data->group_count = group_count(data);
	data->group_size = stack_size(data->a) / data->group_count;
	group = 1;
	while(data->a)
	{
		nearest_in_group = find_nearest_in_group(data->a, group, data->group_size);
		move_to_b(data, nearest_in_group);
		if(nearest_in_group == NULL)
			group++;
	}
	
}

t_stack	*find_nearest_in_group(t_stack *stack, int group, int group_size)
{
	t_stack *nearest;
	t_stack	*tmp;
	int		small_distance;
	int		distance;

	tmp = stack;
	small_distance = INT_MAX;
	nearest = NULL;
	while(tmp)
	{
		if (tmp->index <= group * group_size)
		{
			distance = distance_to_top(stack, tmp->index);
			if (ft_abs(distance) < small_distance)
			{
				nearest = tmp;
				if (distance == 0)
					break ;
			}
		}
		tmp = tmp->next;
	}
	return (nearest);
}