/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:01:48 by sfernand          #+#    #+#             */
/*   Updated: 2022/11/10 21:39:05 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;
	char	*a;
	char	*b;
	char	*c;

	i = 0;
	a = (char *)dest;
	c = (char *)src;
	b = "\0";
	if (dest == '\0' && src == '\0')
		return (dest);
	while (i != len)
	{
		b[i] = c[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		a[i] = b[i];
		i++;
	}
	return (dest);
}
