/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 08:15:16 by maljean           #+#    #+#             */
/*   Updated: 2017/11/16 08:54:42 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	expand(char *str)
{
	int i = 0;
	int space = 0;

	while (str[i])
	{
		if (str[i] <= 32)
			space = 1;
		else if (space)
		{
			space = 0;
			write(1, "   ", 3);
		}
		else if (str[i] > 32)
			write(1, &str[i], 1);
		i++;
	}
}

void	check(char *str)
{
	while (*str <= 32)
		str++;
	expand (str);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (argv[1][0] != '\0')
			check(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
