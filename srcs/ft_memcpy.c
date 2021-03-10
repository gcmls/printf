/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <user@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 20:29:38 by gcosta-m          #+#    #+#             */
/*   Updated: 2021/02/24 17:13:45 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;

	s = (void*)src;
	d = (void*)dest;
	if (!s && !d)
		return (NULL);
	while (n != 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}
