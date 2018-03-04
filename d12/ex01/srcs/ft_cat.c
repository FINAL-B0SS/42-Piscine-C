/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 21:56:17 by maljean           #+#    #+#             */
/*   Updated: 2017/11/09 22:03:39 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft.h"

int	ft_cat(char *file)
{
	char	filler[SIZE + 1];
	int		i;
	int		fl;

	if ((fl = open(file, O_RDONLY)) == -1)
		return (errno);
	while ((i = read(fl, filler, SIZE)) != 0)
	{
		filler[i] = '\0';
		ft_putstr(filler);
	}
	close(fl);
	return (0);
}
