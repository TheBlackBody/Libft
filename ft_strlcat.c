/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:13:17 by sfernand          #+#    #+#             */
/*   Updated: 2022/11/08 15:27:59 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strlcat(char *r_dest, char *r_src, int len)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (r_dest[a] != 0)
		a++;
	while (i != len && r_src[i] != 0)
	{
		r_dest[a] = r_dest[i];
		i++;
		a++;
	}
	while (i != len)
	{
		r_dest[a] = '\0';
		i++;
		a++;
	}
	return (0);
}
