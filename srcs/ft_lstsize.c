/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <user@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:19:18 by gcosta-m          #+#    #+#             */
/*   Updated: 2021/02/19 10:48:07 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		l_size;
	t_list	*current;

	current = lst;
	l_size = 0;
	while (current != NULL)
	{
		l_size++;
		current = current->next;
	}
	return (l_size);
}
