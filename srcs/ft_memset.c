/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <user@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 22:09:05 by gcosta-m          #+#    #+#             */
/*   Updated: 2021/02/19 10:48:16 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*mem;

	mem = (char *)s;
	while (n > 0)
	{
		*mem++ = (char)c;
		n--;
	}
	return (s);
}