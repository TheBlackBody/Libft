/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 07:59:32 by sfernand          #+#    #+#             */
/*   Updated: 2022/11/08 10:07:50 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strlcpy(char *r_dest, char *r_src, int len)
{
	int	i;

	i = 0;
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
	return (0);
}