/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 11:31:03 by maljean           #+#    #+#             */
/*   Updated: 2017/11/02 16:51:45 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_words(char *str)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (!(str[i] == ' ' || str[i] == '\n' || str[i] == '\v' ||
					str[i] == '\t' || str[i] == '\r' || str[i] == '\f'))
			if (str[i] != '\0')
				i++;
			else
				break ;
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\v' ||
				str[i] == '\t' || str[i] == '\r' || str[i] == '\f')
			i++;
		words++;
	}
	return (words);
}

char	*ft_find_words(char *str, int *index)
{
	int		i;
	int		start;
	int		end;
	char	*dest;

	i = *index;
	start = *index;
	while (!(str[i] == ' ' || str[i] == '\n' || str[i] == '\v' ||
				str[i] == '\t' || str[i] == '\r' || str[i] == '\f'))
		if (str[i] != '\0')
			i++;
		else
			break ;
	end = i;
	dest = (char*)malloc(end - start + 1);
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	*index = i;
	i = 0;
	while (i < end - start)
	{
		dest[i] = str[start + i];
		i++;
	}
	return (dest);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		index;
	char	**dest;

	dest = (char**)malloc(sizeof(char*) * (ft_count_words(str) + 1));
	i = 0;
	index = 0;
	while (str[0] == ' ' || str[0] == '\n' || str[0] == '\v' ||
			str[0] == '\t' || str[0] == '\r' || str[0] == '\f')
		str++;
	while (str[i] != '\0')
	{
		dest[index] = ft_find_words(str, &i);
		index++;
	}
	dest[index] = 0;
	return (dest);
}
