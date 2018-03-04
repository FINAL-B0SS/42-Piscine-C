/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 14:33:18 by maljean           #+#    #+#             */
/*   Updated: 2017/11/12 14:33:20 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

char	*generate_line(int x, char *rush, char *pattern, int line)
{
	int ix;

	ix = 0;
	while (ix < x)
	{
		if (ix == 0)
			*rush = pattern[line];
		else if ((ix + 1) == x)
			*rush = pattern[line + 2];
		else
			*rush = pattern[line + 1];
		rush++;
		ix++;
	}
	*rush = '\n';
	rush++;
	return (rush);
}

char	*generate_rush(int x, int y, char *pattern)
{
	char	*rush;
	char	*rush_begin;
	int		iy;
	int		line;

	iy = 0;
	rush = (char *)malloc(sizeof(char) * (x + 1) * y);
	rush_begin = rush;
	if (x > 0 && y > 0)
	{
		while (iy < y)
		{
			if (iy == 0)
				line = 0;
			else if ((iy + 1) == y)
				line = 6;
			else
				line = 3;
			rush = generate_line(x, rush, pattern, line);
			iy++;
		}
	}
	return (rush_begin);
}
