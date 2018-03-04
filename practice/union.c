/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 23:29:37 by maljean           #+#    #+#             */
/*   Updated: 2017/11/17 02:08:43 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check(char *s1, char c, int i)
{
	int j = 0;
	while (j < i)
	{
		if (s1[j] == c)
			return (0);
		j++;
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int i = 0;
	int j;
	while (s1[i])
	{
		if (ft_check(s1, s1[i], i))
			write(1, &s1[i], 1);
		i++;
	}
	j = i;
	i = 0;
	while (s2[i])
	{
		if (ft_check(s2, s2[i], i))
		{
			if (ft_check(s1, s2[i], j))
				write(1, &s2[i], 1);
		}
		i++;
	} 
}

int main(int ac, char **av)
{
	if (argc == 3)
		ft_union(av[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
