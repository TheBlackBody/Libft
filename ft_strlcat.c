/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:13:17 by sfernand          #+#    #+#             */
/*   Updated: 2022/11/09 17:10:32 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<string.h>

char	ft_strlcat(char *r_dest, char *r_src, size_t len)
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
	while (r_src[i])
		i++;
	e = e + i;
	return (e);
}
