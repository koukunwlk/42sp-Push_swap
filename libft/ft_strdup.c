/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 14:31:22 by mamaro-d          #+#    #+#             */
/*   Updated: 2021/09/13 12:52:26 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*ptr;

	len = ft_strlen(s) + 1;
	ptr = (char *)ft_calloc(sizeof(char), len);
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s, len);
	return (ptr);
}
