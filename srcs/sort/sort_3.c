/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:53:59 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/11 19:25:39 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_data *data)
{
	t_stack *big;
	t_stack *low;

	low = find_lower(data->a);
	big = find_bigger(data->a);
	if(is_sorted(data->a))
		return ;
	if(big->next == NULL)
		sa_op(&data->a, 0);
	else if (big->next != low && low->next == big)
	{
		sa_op(&data->a, 0);
		ra_op(&data->a, 0);
	}
	else if (big->next == low && big->previous != NULL)
		rra_op(&data->a, 0);
	else if (big->next != low && low->previous != NULL)
	{
		sa_op(&data->a, 0);
		rra_op(&data->a, 0);
	}
	else if (big->next == low && low->next != NULL)
		ra_op(&data->a, 0);
}
