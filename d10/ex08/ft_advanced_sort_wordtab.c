/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 04:28:28 by maljean           #+#    #+#             */
/*   Updated: 2017/11/07 04:50:13 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **tab, int i, int j)
{
	char *table;

	table = tab[i];
	tab[i] = tab[j];
	tab[j] = table;
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int j;
	int i;

	j = 0;
	while (tab[j] != 0)
		j++;
	j--;
	while (j > 0)
	{
		i = j - 1;
		while (i >= 0)
		{
			if (cmp(tab[i], tab[j]) > 0)
				ft_swap(tab, i, j);
			i--;
		}
		j--;
	}
}
