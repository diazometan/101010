/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwyl-the <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 19:12:37 by lwyl-the          #+#    #+#             */
/*   Updated: 2018/11/20 15:49:28 by lwyl-the         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int	x;

	x = 1;
	if (nb == 1)
		return (1);
	while (x <= nb / 2)
	{
		if ((x % nb) == x)
			if (x * x == nb)
				return (x);
		x++;
	}
	return (0);
}
