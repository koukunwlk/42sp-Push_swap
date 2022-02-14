/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   populate_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:32:40 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/14 18:58:43 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	populate_stack(int argc, char *argv[], t_stack *stack)
{
	int	i;

	i = 1;
	stack->data = ft_atoi(argv[i]);
	stack->next = (t_stack *)malloc(sizeof(t_stack));
	stack->next->previous = stack;
	stack = stack->next;
	while (++i < argc - 1)
	{
		stack->data = ft_atoi(argv[i]);
		stack->next = (t_stack *)malloc(sizeof(t_stack));
		stack->next->previous = stack;
		stack = stack->next;
	}
	stack->data = ft_atoi(argv[i]);
	stack->next = NULL;
}
