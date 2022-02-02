/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 14:46:14 by mamaro-d          #+#    #+#             */
/*   Updated: 2021/09/13 13:37:35 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	last;
	int	i;

	i = 0;
	last = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] == (char)c)
			last = i;
		i++;
	}
	if (last == -1)
		return (NULL);
	return ((char *)(s + last));
}
