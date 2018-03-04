/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 19:12:18 by maljean           #+#    #+#             */
/*   Updated: 2017/10/29 12:29:49 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	line(int x, char c1, char c2, int c3)
{
	if (x > 0)
		ft_putchar(c1);
	while (x > 2)
	{
		ft_putchar(c2);
		x--;
	}
	if (x > 1)
		ft_putchar(c3);
	if (x > 0)
		ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (y > 0)
		line(x, '/', '*', '\\');
	while (y > 2)
	{
		line(x, '*', ' ', '*');
		y--;
	}
	if (y > 1)
		line(x, '\\', '*', '/');
}
