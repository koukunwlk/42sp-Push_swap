/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 19:21:43 by mamaro-d          #+#    #+#             */
/*   Updated: 2021/09/13 13:50:44 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_num(int n);
static char	*int_converter(int i, int n);

char	*ft_itoa(int n)
{
	char	*tmp;
	size_t	i;

	if (n == 0)
	{
		tmp = (char *)ft_calloc(1, 2);
		if (tmp == NULL)
			return (NULL);
		*tmp = 48;
		return (tmp);
	}
	i = count_num(n);
	tmp = int_converter(i, n);
	return (tmp);
}

static void	fill_tmp(unsigned int holder, char *tmp, int div, int j)
{
	while (div)
	{	
		tmp[j] = (holder / div) + 48;
		holder %= div;
		div /= 10;
		j++;
	}
}

static char	*int_converter(int i, int n)
{
	char			*tmp;
	int				div;
	unsigned int	holder;
	int				j;

	j = 0;
	if (n < 0)
		tmp = (char *)ft_calloc(sizeof(char), i + 2);
	else
		tmp = (char *)ft_calloc(sizeof(char), i + 1);
	if (tmp == NULL)
		return (NULL);
	if (n < 0)
	{
		holder = n * -1;
		tmp[j] = '-';
		j++;
	}
	else
		holder = n;
	div = 1;
	while (--i)
		div *= 10;
	fill_tmp(holder, tmp, div, j);
	return (tmp);
}

static int	count_num(int n)
{
	size_t			i;
	unsigned int	tmp_num;

	i = 0;
	if (n < 0)
		tmp_num = n * -1;
	else
		tmp_num = n;
	while (tmp_num)
	{
		tmp_num /= 10;
		i++;
	}
	return (i);
}
