/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 12:26:30 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/01/28 15:44:24 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	validate_args(int argc, char **argv)
{
	if (is_number(argc, argv) && is_different(argc, argv)
		&& is_range(argc, argv))
		return (TRUE);
	return (FALSE);
}
