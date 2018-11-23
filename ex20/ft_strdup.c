/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwyl-the <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 21:01:46 by lwyl-the          #+#    #+#             */
/*   Updated: 2018/11/20 16:00:22 by lwyl-the         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	if (!(tmp = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	while (src[j] != '\0')
	{
		tmp[j] = src[j];
		j++;
	}
	tmp[j] = '\0';
	return (tmp);
}
