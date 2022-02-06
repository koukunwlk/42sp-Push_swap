/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 01:23:49 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/06 16:52:26 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack *stack)
{
	while (stack)
	{
		printf("Value = %d\n", stack->data);
		printf("index = %d\n", stack->index);
		stack = stack->next;
	}	
}

int	main(int argc, char *argv[])
{
	t_stack *sorted_stack;
	t_data	data;

	
	data.a = init_stack();
	data.b = NULL;
	if (!validate_args(argc, argv))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	else
		populate_stack(argc, argv, data.a);
	index_stack(data.a);
	sort_n(&data);
	free_stack(data.a);
	return (0);
}