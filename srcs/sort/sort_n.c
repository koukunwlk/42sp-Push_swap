/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_n.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:47:03 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/06 18:02:05 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_n(t_data *data)
{
	int	group_size;
	int	group_size_static;
	int	last_group_size;
	t_stack *big_in_group;

	group_size = 3;
	group_size_static = 3;
	last_group_size = 3;
	while(stack_size(data->a) > group_size_static)
	{
		while(group_size > last_group_size - 3 && group_size <= 9)
		{
			big_in_group = find_bigger_in_group(data->a, group_size);
			move_to_b(data, big_in_group);
			group_size--;
		}
		last_group_size += 3;
		group_size = last_group_size;
	}
	if(data->a->index > data->a->next->index)
		sa_op(&data->a, 0);
	group_size = 3;
	last_group_size = 3;
	while(data->b->next)
	{
		big_in_group = find_bigger(data->b);
		move_to_a(data, big_in_group);
	}
}