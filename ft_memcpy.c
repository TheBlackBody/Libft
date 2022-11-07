/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:39:18 by sfernand          #+#    #+#             */
/*   Updated: 2022/11/07 17:54:52 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *r_dest, const void *r_src, int n)
{
	int			i;
	char		*a;
	const char	*b;

	i = 0;
	a = r_dest;
	b = r_src;
	while (b[i] != n)
	{
		a[i] = b[i];
		i++;
	}
	r_dest = a;
	return (r_dest);
}
