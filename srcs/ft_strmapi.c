/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <user@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:10:00 by gcosta-m          #+#    #+#             */
/*   Updated: 2021/02/24 17:01:49 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*f_str;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	f_str = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!f_str)
		return (NULL);
	i = -1;
	while (s[++i])
		f_str[i] = (*f)(i, s[i]);
	f_str[i] = '\0';
	return (f_str);
}
