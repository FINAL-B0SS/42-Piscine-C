/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 19:25:29 by maljean           #+#    #+#             */
/*   Updated: 2017/10/26 18:35:20 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int comb[3];

	comb[0] = 48;
	while (comb[0] < 58)
	{
		comb[1] = comb[0] + 1;
		while (comb[1] < 58)
		{
			comb[2] = comb[1] + 1;
			while (comb[2] < 58)
			{
				ft_putchar(comb[0]);
				ft_putchar(comb[1]);
				ft_putchar(comb[2]);
				if (!(comb[0] == '7' && comb[1] == '8' && comb[2] == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				comb[2]++;
			}
			comb[1]++;
		}
		comb[0]++;
	}
}
