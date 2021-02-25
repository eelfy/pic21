/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalyse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:27:55 by afalyse           #+#    #+#             */
/*   Updated: 2021/02/24 18:29:48 by afalyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int chislo;

	chislo = 1;
	i = 1;
	if (nb <= 0)
	{
		if (nb == 0)
			return (1);
		else
			return (0);
	}
	while (i != nb + 1)
	{
		chislo *= i;
		i++;
	}
	return (chislo);
}
