/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:13:17 by sfernand          #+#    #+#             */
/*   Updated: 2022/11/10 21:42:05 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<string.h>

int	ft_lenght(char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
		i++;
	return (i);
}

char	ft_strlcat(char *r_dest, const char *r_src, size_t len)
{
	size_t	i;
	size_t	a;
	size_t	e;

	i = 0;
	a = 0;
	e = 0;
	while (r_dest[a] != 0)
		a++;
	while (i != len - 1 && r_src[i] != 0)
	{
		r_dest[a] = r_dest[i];
		i++;
		a++;
	}
	e = a;
	while (i != len)
	{
		r_dest[a] = '\0';
		i++;
		a++;
	}
	i = 0;
	e = e + ft_lenght(r_src);
	return (e);
}
