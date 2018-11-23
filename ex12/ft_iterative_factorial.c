/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwyl-the <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 18:00:41 by lwyl-the          #+#    #+#             */
/*   Updated: 2018/11/20 15:39:49 by lwyl-the         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int a;

	a = 1;
	if (nb < 0 || nb > 13)
		return (0);
	while (nb > 0)
	{
		a *= nb;
		nb--;
	}
	nb = a;
	return (nb);
}
