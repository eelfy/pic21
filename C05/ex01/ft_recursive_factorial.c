/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalyse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 18:10:22 by afalyse           #+#    #+#             */
/*   Updated: 2021/02/24 18:22:21 by afalyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb <= 0)
		if (nb == 0)
			return (1);
		else
			return (0);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
