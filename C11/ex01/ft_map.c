/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalyse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 14:54:47 by afalyse           #+#    #+#             */
/*   Updated: 2021/03/03 14:44:54 by afalyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *newarr;

	newarr = (int*)malloc(length * sizeof(*newarr));
	i = 0;
	while (i < length)
	{
		newarr[i] = (*f)(tab[i]);
		i++;
	}
	newarr[i] = '\0';
	return (newarr);
}
