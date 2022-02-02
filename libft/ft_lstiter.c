/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 19:00:46 by mamaro-d          #+#    #+#             */
/*   Updated: 2021/09/01 19:11:33 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;
	int		size;

	size = ft_lstsize(lst) + 1;
	tmp = lst;
	while (--size)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}
