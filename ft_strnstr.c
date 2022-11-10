/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:20:12 by sfernand          #+#    #+#             */
/*   Updated: 2022/11/10 21:44:08 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

int	ft_needle(const char *car)
{
	int	i;

	i = 0;
	while (car[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		a;

	i = 0;
	a = 0;
	if (needle[i] == 0)
		return (NULL);
	while (i < len)
	{
		if (haystack[i] == needle[i])
			a++;
		if (a == ft_needle(needle))
			return ((char *)&needle[i - (a + 1)]);
		i++;
	}
	return (0);
}
