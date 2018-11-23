/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwyl-the <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 21:04:35 by lwyl-the          #+#    #+#             */
/*   Updated: 2018/11/20 16:47:45 by lwyl-the         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			*ft_range(int min, int max)
{
	int		len;
	int		i;
	int		*a;

	i = 0;
	if (min >= max)
		return (NULL);
	len = max - min;
	if (!(a = (int*)malloc(sizeof(int) * len)))
		return (NULL);
	while (i < len)
	{
		a[i] = min + i;
		i++;
	}
	return (a);
}
