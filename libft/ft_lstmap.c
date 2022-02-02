/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 19:12:59 by mamaro-d          #+#    #+#             */
/*   Updated: 2021/09/08 16:03:54 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_el;

	if (!lst)
		return (NULL);
	new_el = ft_lstnew(f(lst->content));
	new_lst = new_el;
	lst = lst->next;
	while (lst)
	{
		if (!new_el)
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&new_el, del);
			return (new_lst);
		}
		new_el = ft_lstnew(f(lst->content));
		lst = lst->next;
		ft_lstadd_back(&new_lst, new_el);
	}
	return (new_lst);
}
