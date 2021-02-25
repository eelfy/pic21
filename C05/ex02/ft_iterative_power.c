/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalyse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 18:22:30 by afalyse           #+#    #+#             */
/*   Updated: 2021/02/24 21:22:58 by afalyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int res;

	res = 1;
	i = 0;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power != 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}
