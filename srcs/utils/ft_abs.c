/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 17:03:36 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/02/04 17:03:51 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_max(int x, int y)
{
	if (x > y)
		return (x);
	return (y);
}

int	ft_min(int x, int y)
{
	if (x > y)
		return (y);
	return (x);
}

int	ft_abs(int a)
{
	if (a < 0)
		return (-a);
	return (a);
}