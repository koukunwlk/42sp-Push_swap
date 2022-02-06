/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_n.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:47:03 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/06 17:07:08 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_n(t_data *data)
{
	int	group_size;
	int	last_group_size;
	t_stack *big_in_group;

	group_size = 3;
	last_group_size = 3;
	while(stack_size(data->a) > 2)
	{
		while(group_size > last_group_size - 3)
		{
			big_in_group = find_bigger_in_group(data->a, group_size);
			move_to_b(data, big_in_group);
			group_size--;
		}
		last_group_size += 3;
		group_size = last_group_size;
	}
}