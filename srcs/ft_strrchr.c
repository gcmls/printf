/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <user@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 20:54:12 by gcosta-m          #+#    #+#             */
/*   Updated: 2021/02/19 10:50:36 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	unsigned int	len;

	len = ft_strlen(s);
	if (!s)
		return (NULL);
	while (s[len] != (unsigned char)c && len)
		len--;
	if (s[len] == (unsigned char)c)
		return ((char*)&s[len]);
	else
		return (NULL);
	return (NULL);
}
