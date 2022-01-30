/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 14:14:46 by mamaro-d          #+#    #+#             */
/*   Updated: 2022/01/28 15:31:32 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	*ft_memset(void *mem, int c, size_t len)
{
	while (len--)
	{
		*(unsigned char *)(mem + len) = (unsigned char)(c);
	}
	return (mem);
}

static void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

void	*ft_calloc(size_t nbytes, size_t sizemem)
{
	void	*ptr;

	ptr = malloc(nbytes * sizemem);
	if (ptr == 0)
		return (0);
	ft_bzero(ptr, (nbytes & sizemem));
	return (ptr);
}
