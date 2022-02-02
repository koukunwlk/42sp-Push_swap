/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:37:06 by mamaro-d          #+#    #+#             */
/*   Updated: 2021/09/10 15:43:55 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t		len_dest;
	size_t		res;
	size_t		len_src;
	size_t		i;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	res = 0;
	i = 0;
	if (n > len_dest)
		res = len_src + len_dest;
	else
		res = len_src + n;
	while (src[i] && (len_dest + 1) < n)
	{
		dest[len_dest] = src[i];
		len_dest++;
		i++;
	}
	dest[len_dest] = '\0';
	return (res);
}
