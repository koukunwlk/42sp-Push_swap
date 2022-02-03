/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:53:59 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/03 15:08:54 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


/* void	sort_3(t_stack **stack_a)
{
	if (is_sorted(*stack_a))
		return ;
	if ((*stack_a)->data > (*stack_a)->next->data && (*stack_a)->data < (*stack_a)->next->next->data)
		sa_op(stack_a, 0);
	else if ((*stack_a)->data > (*stack_a)->next->data && (*stack_a)->next->data > (*stack_a)->next->next->data)
		sa_op(stack_a, 0);
	else if ((*stack_a)->data > (*stack_a)->next->data && (*stack_a)->next->data > (*stack_a)->next->next->data)
		ra_op(stack_a, 0);
	else if ((*stack_a)->data > (*stack_a)->next->data && (*stack_a)->next->data < (*stack_a)->next->next->data)
		ra_op(stack_a, 0);
	else if ((*stack_a)->data < (*stack_a)->next->data && (*stack_a)->next->data > (*stack_a)->next->next->data)
		rra_op(stack_a, 0);
	sort_3(stack_a);
} */

void	sort_3(t_stack **stack_a)
{
	if ((*stack_a)->data > (*stack_a)->next->data && (*stack_a)->next->data
		< (*stack_a)->next->next->data && (*stack_a)->next->next->data
		< (*stack_a)->data)
		sa_op(stack_a, 0);
	else if ((*stack_a)->data < (*stack_a)->next->data && (*stack_a)->next->data
			< (*stack_a)->next->next->data && (*stack_a)->next->next->data
			> (*stack_a)->data)
	{
		sa_op(stack_a, 0);
		rra_op(stack_a, 0);
	}
	else if ((*stack_a)->data > (*stack_a)->next->data && (*stack_a)->next->data
			< (*stack_a)->next->next->data && (*stack_a)->next->next->data
			> (*stack_a)->data)
		ra_op(stack_a, 0);
	else if ((*stack_a)->data < (*stack_a)->next->data && (*stack_a)->next->data
			> (*stack_a)->next->next->data && (*stack_a)->next->next->data
			< (*stack_a)->data)
	{
		sa_op(stack_a, 0);
		ra_op(stack_a, 0);
	}
	else if ((*stack_a)->data < (*stack_a)->next->data && (*stack_a)->next->data
			> (*stack_a)->next->next->data && (*stack_a)->next->next->data
			> (*stack_a)->data)
	 	rra_op(stack_a, 0);
}
