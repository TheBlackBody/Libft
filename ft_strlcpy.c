/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 07:59:32 by sfernand          #+#    #+#             */
/*   Updated: 2022/11/10 21:42:26 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<string.h>

size_t	ft_strlcpy(char *r_dest, const char *r_src, size_t len)
{
	size_t	i;
	size_t	b;

	i = 0;
	b = 0;
	while (i != len && r_src[i] != 0)
	{
		r_dest[i] = r_src[i];
		i++;
	}
	while (len != i)
	{
		r_dest = "\0";
		i++;
	}
	i = 0;
	while (r_src[i])
		i++;
	b = i;
	return (b);
}
