/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:04:42 by sfernand          #+#    #+#             */
/*   Updated: 2022/11/09 17:09:02 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

int	ft_lenght1(const char *src, size_t	n)
{
	size_t	i;
	int		*a;
	int		b;

	i = 0;
	a = (int *)src;
	b = 0;
	while (i < n)
	{
		b = b + a[i];
		i++;
	}	
	return (b);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (ft_lenght1(s1, n) == ft_lenght1(s2, n))
		return (0);
	else if (ft_lenght1(s1, n) < ft_lenght1(s2, n))
		return (-1);
	else if (ft_lenght1(s1, n) < ft_lenght1(s2, n))
		return (1);
	return (0);
}
