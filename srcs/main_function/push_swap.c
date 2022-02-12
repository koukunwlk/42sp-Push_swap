/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 01:23:49 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/12 18:52:52 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_data	data;

	data.a = init_stack();
	data.b = NULL;
	if (argc < 3)
		return (0);
	if (!validate_args(argc, argv))
		return (write(2, "Error\n", 6));
	else
		populate_stack(argc, argv, data.a);
	index_stack(data.a);
	if (is_sorted(data.a))
		return (free_stack(data.a));
	if (stack_size(data.a) == 2)
		sa_op(&data.a, 0);
	else if (stack_size(data.a) == 3)
		sort_3(&data);
	else if (stack_size(data.a) > 3 && stack_size(data.a) <= 5)
		sort_5(&data);
	else
		sort_n(&data);
	return (free_stack(data.a));
}
