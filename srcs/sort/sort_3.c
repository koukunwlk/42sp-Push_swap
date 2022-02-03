/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:53:59 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/03 14:02:23 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	sort_3(t_stack **stack_a)
{
	if(is_sorted(*stack_a))
		return ;
	if ((*stack_a)->data > (*stack_a)->next->data)
		sa_op(stack_a, 0);
	if ((*stack_a)->data > (*stack_a)->next->next->data)
		rra_op(stack_a, 0);
	sort_3(stack_a);
}
