/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:05:50 by sfernand          #+#    #+#             */
/*   Updated: 2022/11/10 13:19:31 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

int	memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*a;
	char	*b;

	i = 0;
	a = (char *)s1;
	b = (char *)s2;
	while (i < n)
	{
		if (a[i] < b[i])
			return (-1);
		else if (a[i] > b[i])
			return (1);
		i++;
	}
	return (0);
}
