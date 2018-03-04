/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 16:06:34 by maljean           #+#    #+#             */
/*   Updated: 2017/11/17 02:57:55 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    wdmatch(char *s1, char *s2)
{
	char *result;
	int i = 0;
	result = s1;
	while (*s2)
	{
		if (*s2 == *s1)
			s1++;
		s2++;
	}
	while (result[i])
		i++;
	write(1, result, i);
}

int     main(int ac, char **av)
{
	if (ac == 3)
		wdmatch(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
