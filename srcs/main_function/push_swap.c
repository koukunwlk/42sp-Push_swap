/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 01:23:49 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/04 17:01:59 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack *stack)
{
	while (stack)
	{
		printf("%d\n", stack->data);
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
	sort_5(&data);
	free_stack(data.a);
	return (0);
}