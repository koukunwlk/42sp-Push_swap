/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 01:23:49 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/03 13:30:38 by mamaro-d         ###   ########.fr       */
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
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = init_stack();
	stack_b = NULL;
	if (!validate_args(argc, argv))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	else
		populate_stack(argc, argv, stack_a);
	if(argc == 4)
		sort_3(&stack_a);
	free_stack(stack_a);
	return (0);
}
