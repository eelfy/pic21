/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhelya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 15:12:44 by lhelya            #+#    #+#             */
/*   Updated: 2021/02/20 15:26:59 by lhelya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
// 
void	rush(int x, int y);

void	top_str(int x)
{
	int cnt;

	ft_putchar('A');
	cnt = x > 2 ? x - 2 : 0;
	while (cnt-- > 0)
	{
		ft_putchar('B');
	}
	if (x > 1)
	{
		ft_putchar('A');
	}
	ft_putchar('\n');
}

void	middle_str(int x)
{
	int cnt;

	ft_putchar('B');
	cnt = x > 2 ? x - 2 : 0;
	while (cnt-- > 0)
	{
		ft_putchar(' ');
	}
	if (x > 1)
	{
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	last_str(int x)
{
	int cnt;

	ft_putchar('C');
	cnt = x > 2 ? x - 2 : 0;
	while (cnt-- > 0)
	{
		ft_putchar('B');
	}
	if (x > 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int cnt;

	if (x <= 0 || y <= 0)
	{
		return ;
	}
	top_str(x);
	cnt = y > 2 ? y - 2 : 0;
	while (cnt-- > 0)
	{
		middle_str(x);
	}
	if (y > 1)
	{
		last_str(x);
	}
}


int		main(void)
{
	rush(5, 3);
	rush(0, 0);
	rush(100, 100);
	rush(1000, 1000);
	return (0);
}
