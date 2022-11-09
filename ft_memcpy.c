/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:39:18 by sfernand          #+#    #+#             */
/*   Updated: 2022/11/08 15:26:38 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

void	*ft_memcpy(void *r_dest, const void *r_src, size_t n)
{
	size_t		i;
	char		*a;
	const char	*b;

	i = 0;
	a = (char *)r_dest;
	b = (char *)r_src;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (r_dest);
}
