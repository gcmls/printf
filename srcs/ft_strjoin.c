/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <user@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:04:31 by gcosta-m          #+#    #+#             */
/*   Updated: 2021/02/24 17:00:50 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	join = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!join)
		return (NULL);
	while (*s1)
	{
		join[i++] = *s1;
		s1++;
	}
	while (*s2)
	{
		join[i++] = *s2;
		s2++;
	}
	join[i] = '\0';
	return (join);
}
