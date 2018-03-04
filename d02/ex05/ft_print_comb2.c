/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 09:33:50 by maljean           #+#    #+#             */
/*   Updated: 2017/10/26 20:01:45 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	g_table[4];

void	ft_putchar(char c);

void	ft_longer(void)
{
	if ((g_table[3] = g_table[3] % 10) == 0)
		g_table[2] = (g_table[2] + 1);
	if (g_table[2] == 10)
	{
		g_table[2] = g_table[0];
		g_table[1]++;
		if ((g_table[1] = g_table[1] % 10) == 0)
			g_table[0]++;
		g_table[3] = g_table[1] + 1;
	}
}

void	ft_print_comb2(void)
{
	g_table[3] = 1;
	while (!((g_table[0] == 9) && (g_table[1] == 9)))
	{
		ft_putchar(g_table[0] + '0');
		ft_putchar(g_table[1] + '0');
		ft_putchar(' ');
		ft_putchar(g_table[2] + '0');
		ft_putchar(g_table[3] + '0');
		if (!((g_table[0] == 9) && (g_table[1] == 8)))
			ft_putchar(',');
		if (!((g_table[0] == 9) && (g_table[1] == 8)))
			ft_putchar(' ');
		g_table[3]++;
		ft_longer();
	}
}
