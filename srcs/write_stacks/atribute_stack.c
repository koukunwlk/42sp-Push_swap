/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atribute_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 14:33:57 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/01/29 16:20:26 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*atribute_stack(t_stack *stack, char **argv)
{
	int	i;
	int	size;

	size = stack->capacity;
	i = 1;
	while (size >= 0)
	{
		stack->numbers[size] = ft_atoi(argv[i]);
		stack->top++;
		i++;
		size--;
	}
	return (stack->numbers);
}
