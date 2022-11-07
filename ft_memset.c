/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:33:50 by sfernand          #+#    #+#             */
/*   Updated: 2022/11/07 17:32:05 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *p, int v, int len)
{
	int		i;
	char	*a;

	i = 0;
	a = p;
	while (a[i] != len)
	{
		a[i] = v;
		i++;
	}
	p = a;
	return (p);
}
