/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 09:05:20 by maljean           #+#    #+#             */
/*   Updated: 2017/11/16 09:16:53 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int sign = 1;
	int nb = 0;
	while (*str <= 32)
		str++;
	if (*str == '-')
		sign = -1;
	while (*str >= '0' && *str <= '9')
	{
		nb = (nb * 10) + *str - '0';
		str++;
	}
	return (sign * nb);
}

void	ft_putnbr(int nb)
{
	char c;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		c = nb + '0';
		write(1, &c, 1);
	}
}

void	tab_mult(char *str)
{
	int n1 = 1;
	int n2 = ft_atoi(str);
	int r = 0;
	while (n1 <= 9)
	{
		ft_putnbr(n1);
		write(1, " x ", 3);
		ft_putnbr(n2);
		write(1, " = ", 3);
		r = n1 * n2;
		ft_putnbr(r);
		if (n1 <= 8)
			write(1, "\n", 1);
		n1++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		tab_mult(argv[1]);
	write(1, "\n", 1);
	return (0);
}
