/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwyl-the <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:27:08 by lwyl-the          #+#    #+#             */
/*   Updated: 2018/11/20 16:17:42 by lwyl-the         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	else if (argc == 1)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	else
		display(argv);
	return (0);
}
