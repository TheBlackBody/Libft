/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:23:08 by sfernand          #+#    #+#             */
/*   Updated: 2022/11/07 14:33:20 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *a)
{
	int	i;

	i = 0;
	while (a[i] != 0)
	{
		i++;
	}
	return (i);
}