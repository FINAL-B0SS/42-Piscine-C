/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 22:52:04 by maljean           #+#    #+#             */
/*   Updated: 2017/11/15 23:39:44 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int  i = 0;
	int nb = 0;
	if (str[i] == '-')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + str[i] - '0';
		i++;
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int	ft_is_prime(int nb)
{
	int i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_add_prime_sum(int nb)
{
	int i = 2;
	int sum = 0;
	while (i <= nb)
	{
		if (ft_is_prime(i))
			sum += i;
		i++;
	}
	ft_putnbr(sum);
}

int main(int ac, char **av)
{
	if (ac == 2)
		ft_add_prime_sum(ft_atoi(av[1]));
	write(1, "\n", 1);
	return (0);
}
