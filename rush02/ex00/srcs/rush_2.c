/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 14:35:52 by maljean           #+#    #+#             */
/*   Updated: 2017/11/12 14:35:54 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

void	rush_cmp(int x, int y, char *save)
{
	int index;

	index = 1;
	if (ft_strcmp(rush00_0(x, y), save) == 0)
		index = ft_put_rush("[rush-00]", x, y, index);
	if (ft_strcmp(rush00_1(x, y), save) == 0)
		index = ft_put_rush("[rush-01]", x, y, index);
	if (ft_strcmp(rush00_2(x, y), save) == 0)
		index = ft_put_rush("[rush-02]", x, y, index);
	if (ft_strcmp(rush00_3(x, y), save) == 0)
		index = ft_put_rush("[rush-03]", x, y, index);
	if (ft_strcmp(rush00_4(x, y), save) == 0)
		index = ft_put_rush("[rush-04]", x, y, index);
	if (index)
		ft_putstr("aucune");
}

void	count_rush(char *save)
{
	int nbr_x;
	int nbr_y;
	int index;

	index = 0;
	nbr_x = 0;
	nbr_y = 0;
	while (save[index] != '\0')
	{
		if (save[index] == '\n')
			nbr_y++;
		if (save[index] != '\n')
			nbr_x++;
		index++;
	}
	if (nbr_y != 0)
		nbr_x = nbr_x / nbr_y;
	rush_cmp(nbr_x, nbr_y, save);
}

int		main(int argc, char **argv)
{
	int		index;
	char	buf[BUF_SIZE];
	char	*buffer;
	int		ret;

	*argv = *argv;
	index = 0;
	if (argc == 1)
	{
		buffer = malloc(BUF_SIZE + 1);
		while ((ret = read(0, buf, 1)) > 0)
		{
			buffer[index] = buf[0];
			index++;
		}
		buffer[index] = '\0';
		count_rush(buffer);
		ft_putchar('\n');
	}
	else
	{
		ft_putstr("Error\n");
	}
	return (0);
}
