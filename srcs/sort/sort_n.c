/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_n.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:47:03 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/06 18:07:36 by mamaro-d         ###   ########.fr       */
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
	int	last_group;
	int	i;
	int	hold_index;

	data->group_count = group_count(data);
	data->group_size = stack_size(data->a) / data->group_count;
	printf("Group size = %d", data->group_size);

	last_group = 0;
	i = 1;
	while(stack_size(data->a) > 2)
	{
		hold_index = data->group_size * i;
		while(hold_index > last_group)
		{
			data->big = find_bigger_in_group(data->a, hold_index);
			move_to_b(data, data->big);
			hold_index--;
		}
		last_group += data->group_size;
		i++;
	}
}