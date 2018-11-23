/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwyl-the <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 18:38:05 by lwyl-the          #+#    #+#             */
/*   Updated: 2018/11/20 17:26:19 by lwyl-the         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 1)
		return (nb);
	if (nb == 0)
		return (1);
	if (nb > 1 && nb < 13)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (0);
}
