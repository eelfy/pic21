/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalyse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 16:49:38 by afalyse           #+#    #+#             */
/*   Updated: 2021/03/03 18:21:33 by afalyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
	int i;

	i = 0;
	while (tab[i] != '\0')
	{
		if ((f)(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}
