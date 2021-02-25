/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalyse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 10:48:07 by afalyse           #+#    #+#             */
/*   Updated: 2021/02/20 21:32:38 by afalyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int i;
	int answ;

	i = 0;
	if (str[0] == '\0')
	{
		answ = 1;
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
		{
			answ = 1;
		}
		else
		{
			answ = 0;
			break ;
		}
		++i;
	}
	return (answ);
}
