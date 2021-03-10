/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <user@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:22:20 by gcosta-m          #+#    #+#             */
/*   Updated: 2021/02/19 10:47:59 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*cur;

	if (lst)
	{
		while (*lst)
		{
			cur = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = cur;
		}
	}
}
