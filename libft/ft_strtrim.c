/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:26:40 by mamaro-d          #+#    #+#             */
/*   Updated: 2021/09/13 17:38:15 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_find_char(char const *set, char c);

char	*ft_strtrim(const char *s1, char const *set)
{
	size_t		end;
	size_t		ini;
	size_t		i;
	char		*ptr;

	ini = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[ini] && ft_find_char(set, s1[ini]))
		ini++;
	end = ft_strlen(s1);
	while (end > ini && ft_find_char(set, s1[end - 1]))
		end--;
	ptr = (char *)ft_calloc(1, end - ini + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (ini + i < end)
	{
		ptr[i] = s1[ini + i];
		i++;
	}
	return (ptr);
}

static int	ft_find_char(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}
