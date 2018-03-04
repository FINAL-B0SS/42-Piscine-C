/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 21:05:07 by maljean           #+#    #+#             */
/*   Updated: 2017/11/07 04:52:18 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str)
{
	int i;
	int nb;
	int neg;

	i = 0;
	nb = 0;
	neg = 0;
	while (str[i] >= 1 && str[i] <= 32)
		i++;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb *= 10;
		nb += str[i] - '0';
		i++;
	}
	if (neg)
		return (-nb);
	else
		return (nb);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48);
		return ;
	}
	ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + 48);
	return ;
}

void	do_op(char *nb1, char *op, char *nb2)
{
	int	n1;
	int	n2;
	int	r;

	n1 = ft_atoi(nb1);
	n2 = ft_atoi(nb2);
	r = 0;
	if (op[0] == '+')
		r = n1 + n2;
	else if (op[0] == '-')
		r = n1 - n2;
	else if (op[0] == '*')
		r = n1 * n2;
	else if (op[0] == '/')
		r = n1 / n2;
	else if (op[0] == '%')
		r = n1 % n2;
	ft_putnbr(r);
}

int		main(int argc, char **argv)
{
	if (argv[2][0] == '/' && argv[3][0] == '0')
		write(1, "Stop : division by zero\n", 24);
	else if (argv[2][0] == '%' && argv[3][0] == '0')
		write(1, "Stop : modulo by zero\n", 24);
	else if (argc == 4)
	{
		do_op(argv[1], argv[2], argv[3]);
		ft_putchar('\n');
	}
	return (0);
}
