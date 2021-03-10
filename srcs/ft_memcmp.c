/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <user@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 22:08:33 by gcosta-m          #+#    #+#             */
/*   Updated: 2021/02/19 10:48:12 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*mem1;
	unsigned char	*mem2;

	mem1 = (unsigned char*)s1;
	mem2 = (unsigned char*)s2;
	if (n == 0 || s1 == s2)
		return (0);
	while (n--)
	{
		if (*mem1 != *mem2)
			return (*mem1 - *mem2);
		if (n)
		{
			mem1++;
			mem2++;
		}
	}
	return (0);
}
