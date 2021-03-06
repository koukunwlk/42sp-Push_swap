/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_n.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:47:03 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/15 14:28:52 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_sqrt(int number)
{
	size_t	i;

	i = 0;
	while (i * i <= (size_t)number)
	{
		if (i * i == (size_t)number)
		{
			return (i);
		}
		i++;
	}
	return (i - 1);
}

int	group_count(t_data *data)
{
	int	i;
	int	stack_len;

	i = 0;
	stack_len = stack_size(data->a);
	if (stack_len > 9)
		stack_len *= 2;
	while (stack_len)
	{
		stack_len /= 2;
		i++;
	}
	return (i);
}

void	sort_n(t_data *data)
{
	t_stack	*nearest;
	t_stack	*bigger;
	int		group;

	data->group_count = group_count(data);
	data->group_size = stack_size(data->a) / data->group_count;
	group = 1;
	while (!is_sorted(data->a))
	{
		while (group <= data->group_count + 1)
		{
			nearest = find_nearest_in_group(data->a, group, data->group_size);
			move_to_b(data, nearest);
			if (nearest == NULL)
				group++;
		}
		while (data->b)
		{
			bigger = find_bigger(data->b);
			move_to_a(data, bigger);
		}
	}
}

t_stack	*find_nearest_in_group(t_stack *stack, int group, int group_size)
{
	t_stack	*nearest;
	t_stack	*tmp;
	int		small_distance;
	int		distance;

	tmp = stack;
	small_distance = INT_MAX;
	nearest = NULL;
	while (tmp)
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
		small_distance = ft_abs(distance);
		tmp = tmp->next;
	}
	return (nearest);
}
