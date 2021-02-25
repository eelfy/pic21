/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhelya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 15:17:52 by lhelya            #+#    #+#             */
/*   Updated: 2021/02/20 15:19:15 by lhelya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
