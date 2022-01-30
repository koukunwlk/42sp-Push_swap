/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 12:27:31 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/01/28 15:41:24 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_number(int argc, char **argv)
{
	int	size;

	size = argc - 1;
	while (size > 0)
	{
		if (!ft_is_digit(*argv[size]))
			return (FALSE);
		size--;
	}
	return (TRUE);
}
