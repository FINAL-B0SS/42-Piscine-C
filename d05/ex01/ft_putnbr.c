/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 09:57:08 by maljean           #+#    #+#             */
/*   Updated: 2017/10/30 18:48:19 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long long nnb;

	nnb = nb;
	if (nnb < 0)
	{
		ft_putchar('-');
		nnb = -nnb;
	}
	if (nnb >= 10)
	{
		ft_putnbr(nnb / 10);
		ft_putnbr(nnb % 10);
	}
	else
	{
		ft_putchar(nnb + '0');
	}
}
