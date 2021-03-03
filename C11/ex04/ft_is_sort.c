/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalyse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 20:04:42 by afalyse           #+#    #+#             */
/*   Updated: 2021/03/03 20:19:56 by afalyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int n;
	int diff1;
	int diff2;
	int cnt;

	i = 0;
	n = 1;
	cnt = 0;
	while (n + 1 < length)
	{
		diff1 = (*f)(tab[i], tab[n]);
		diff2 = (*f)(tab[n], tab[n + 1]);
		if ((diff1 >= 0 && diff2 >= 0) || (diff1 <= 0 && diff2 <= 0))
			cnt++;
		else
			return (0);
		i++;
		n++;
	}
	return (1);
}
