/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 19:05:50 by maljean           #+#    #+#             */
/*   Updated: 2017/11/11 22:49:24 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + 48);
}

int		do_op(int num1, int num2, char op)
{
	if (op == '+')
		return (num1 + num2);
	else if (op == '-')
		return (num1 - num2);
	else if (op == '*')
		return (num1 * num2);
	else if (op == '/')
		return (num1 / num2);
	else if (op == '%')
		return (num1 % num2);
	else
		return (0);
}

char	*elim_spaces(char *str)
{
	int		i;
	int		x;
	char	*str2;

	i = 0;
	x = 0;
	str2 = malloc(sizeof(char) * (ft_strlen(str)));
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			str2[x] = str[i];
			x++;
		}
		i++;
	}
	str2[x] = '\0';
	return (str2);
}
