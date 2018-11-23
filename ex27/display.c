/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwyl-the <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:26:45 by lwyl-the          #+#    #+#             */
/*   Updated: 2018/11/20 16:16:35 by lwyl-the         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int				display(char **argv)
{
	int			fd;
	int			ret;
	char		buf[1024 + 1];

	fd = open(argv[1], O_RDONLY);
	while ((ret = read(fd, buf, 1024)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	close(fd);
	return (0);
}
