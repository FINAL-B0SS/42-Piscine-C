/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 19:22:40 by maljean           #+#    #+#             */
/*   Updated: 2017/10/28 21:16:40 by maljean          ###   ########.fr       */
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
		line(x, 'A', 'B', 'C');
	while (y > 2)
	{
		line(x, 'B', ' ', 'B');
		y--;
	}
	if (y > 1)
		line(x, 'C', 'B', 'A');
}
