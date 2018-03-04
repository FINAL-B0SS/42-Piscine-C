/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 14:34:07 by maljean           #+#    #+#             */
/*   Updated: 2017/11/12 14:34:10 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

char	*rush00_0(int x, int y)
{
	char	*rush;
	char	*pattern;

	pattern = "o-o| |o-o";
	rush = generate_rush(x, y, pattern);
	return (rush);
}

char	*rush00_1(int x, int y)
{
	char	*rush;
	char	*pattern;

	pattern = "/*\\* *\\*/";
	rush = generate_rush(x, y, pattern);
	return (rush);
}

char	*rush00_2(int x, int y)
{
	char	*rush;
	char	*pattern;

	pattern = "ABAB BCBC";
	rush = generate_rush(x, y, pattern);
	return (rush);
}

char	*rush00_3(int x, int y)
{
	char	*rush;
	char	*pattern;

	pattern = "ABCB BABC";
	rush = generate_rush(x, y, pattern);
	return (rush);
}

char	*rush00_4(int x, int y)
{
	char	*rush;
	char	*pattern;

	pattern = "ABCB BCBA";
	rush = generate_rush(x, y, pattern);
	return (rush);
}
