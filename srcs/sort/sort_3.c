/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:53:59 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/04 11:38:07 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_stack *stack_a)
{
	t_stack *big;
	t_stack *low;

	low = find_lower(stack_a);
	big = find_bigger(stack_a);
	if(big->next == NULL)
		sa_op(&stack_a, 0);
	else if (big->next != low && low->next == big)
	{
		sa_op(&stack_a, 0);
		ra_op(&stack_a, 0);
	}
	else if (big->next == low && big->previous != NULL)
		rra_op(&stack_a, 0);
	else if (big->next != low && low->previous != NULL)
	{
		sa_op(&stack_a, 0);
		rra_op(&stack_a, 0);
	}
	else if (big->next == low && low->next != NULL)
		ra_op(&stack_a, 0);
}
