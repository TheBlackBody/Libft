/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:13:17 by sfernand          #+#    #+#             */
/*   Updated: 2022/11/15 17:17:55 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<string.h>
#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	s;
	size_t	d;

	j = 0;
	if (!dst && size == 0)
		return (0);
	d = ft_strlen(dst);
	s = ft_strlen(src);
	i = d;
	if (size < d)
		return (s + size);
	else
	{
		while (src[j] && (d + j) < size)
			dst[i++] = src[j++];
		if ((d + j) == size && d < size)
			dst[--i] = '\0';
		else
			dst[i] = '\0';
		return (s + d);
	}
}
