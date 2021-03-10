/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <user@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 22:08:49 by gcosta-m          #+#    #+#             */
/*   Updated: 2021/02/19 10:48:11 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*mem;

	mem = (unsigned char*)s;
	while (n--)
	{
		if (*mem == (unsigned char)c)
		{
			return (mem);
		}
		mem++;
	}
	return (NULL);
}
