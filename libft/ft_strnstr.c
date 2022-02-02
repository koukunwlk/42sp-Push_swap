/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 16:42:38 by mamaro-d          #+#    #+#             */
/*   Updated: 2021/09/14 13:44:06 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		needle_len;

	if (needle[0] == '\0')
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	while (*haystack && len)
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0 && needle_len <= len)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
