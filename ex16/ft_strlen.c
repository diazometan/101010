/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwyl-the <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 19:22:20 by lwyl-the          #+#    #+#             */
/*   Updated: 2018/11/20 15:51:22 by lwyl-the         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strlen(char *str)
{
	char	*tmp;
	int		i;

	tmp = str;
	i = 0;
	while (*tmp != '\0')
	{
		tmp++;
		i++;
	}
	return (i);
}
