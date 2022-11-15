/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:49:59 by sfernand          #+#    #+#             */
/*   Updated: 2022/11/15 16:01:12 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*dest;
	int		i;
	int		n;

	dest = (void *)malloc(count * size);
	n = (count * size);
	i = 0;
	if (!dest)
	{
		return (NULL);
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return ((void *)dest);
}
