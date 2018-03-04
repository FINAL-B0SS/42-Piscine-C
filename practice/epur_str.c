/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 23:57:40 by maljean           #+#    #+#             */
/*   Updated: 2017/11/16 00:14:58 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	epur(char *str)
{
	int i = 0;
	int space = 0;
	while (str[i])
	{
		if (str[i] <= 32)
			space = 1;
		else if (space)
		{
			write(1, " ", 1);
			space = 0;
		}
		else if (str[i] > 32)
			write(1, &str[i], 1);
		i++;
	}
}

void	ft_check(char *str)
{
	while (*str <= 32)
		str++;
	epur(str);
}

int main(int argc, char **argv)
{
	if (argc == 2)
		ft_check(argv[1]);
	write(1, "\n", 1);
	return (0);
}
