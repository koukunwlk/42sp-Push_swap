/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:26:10 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/02 19:44:57 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss_op(t_stack *stack)
{
	sa_op(&stack, 1);
	sb_op(&stack, 1);
	write(1, "ss\n", 3);
}
