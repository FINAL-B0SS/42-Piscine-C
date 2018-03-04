/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 21:21:19 by maljean           #+#    #+#             */
/*   Updated: 2017/11/09 21:45:41 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft.h"

int		ft_display_file(char *file)
{
	char	filler[SIZE + 1];
	int		i;
	int		fl;

	if ((fl = open(file, O_RDONLY)) == -1)
		return (1);
	while ((i = read(fl, filler, SIZE)) != 0)
	{
		filler[i] = '\0';
		ft_putstr(filler);
	}
	close(fl);
	return (0);
}
