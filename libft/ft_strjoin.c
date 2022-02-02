/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:10:46 by mamaro-d          #+#    #+#             */
/*   Updated: 2021/09/13 13:45:42 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, const char *s2)
{
	size_t	size;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)ft_calloc(sizeof(char), size);
	if (str == NULL)
		return (NULL);
	ft_strlcat(str, s1, size);
	ft_strlcat(str, s2, size);
	return (str);
}
