/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 15:47:27 by mamaro-d          #+#    #+#             */
/*   Updated: 2021/08/27 16:28:41 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char			c;
	unsigned int	div;
	unsigned int	num;

	if (n < 0)
		write(fd, "-", 1);
	if (n < 0)
		num = (-1) * n;
	else
		num = n;
	div = 1;
	while (n / 10)
	{
		n = n / 10;
		div *= 10;
	}
	while (div)
	{
		c = '0' + num / div;
		write(fd, &c, 1);
		num = num % div;
		div = div / 10;
	}
}
