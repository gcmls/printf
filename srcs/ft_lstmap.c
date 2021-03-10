/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <user@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:23:42 by gcosta-m          #+#    #+#             */
/*   Updated: 2021/02/19 10:48:03 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*start;
	t_list	*cur;

	if (!lst)
		return (NULL);
	cur = lst;
	start = ft_lstnew(f(cur->content));
	if (!start)
		return (NULL);
	cur = cur->next;
	while (cur)
	{
		new = ft_lstnew(f(cur->content));
		if (!new)
		{
			ft_lstclear(&start, del);
			return (NULL);
		}
		ft_lstadd_back(&start, new);
		cur = cur->next;
	}
	return (start);
}
