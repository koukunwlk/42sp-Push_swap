/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 15:32:35 by mamaro-d          #+#    #+#             */
/*   Updated: 2021/09/13 16:29:31 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*pointer;

	pointer = (unsigned char *)s;
	while (n--)
	{
		if (*pointer == (unsigned char)c)
			return ((void *)pointer);
		pointer++;
	}
	return (NULL);
}
