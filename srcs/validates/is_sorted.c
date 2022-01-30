/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 15:53:27 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/01/29 18:10:41 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *stack_a)
{
	int	i;

	i = stack_a->top;
	if (stack_a->top == -1)
		return (TRUE);
	while (i)
	{
		if (stack_a->numbers[i] > stack_a->numbers[i - 1])
			return (FALSE);
		i--;
	}
	return (TRUE);
}
