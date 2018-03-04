/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 16:31:11 by maljean           #+#    #+#             */
/*   Updated: 2017/11/16 22:05:02 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_words(char *str)
{
	int i = 0;
	int words = 0;
	while (str[i] != '\0')
	{
		while (str[i] > 32)
			if (str[i] != '\0')
				i++;
			else
				break ;
		while (str[i] <= 32)
			if (str[i] != '\0')
				i++;
			else
				break ;
		words++;
	}
	return (words);
}

char	*find_words(char *str, int *index)
{
	int i;
	int start;
	int end;
	char **dest;

	start = *index;
	i = start;
	while (str[i] > 32)
		if (str[i] != '\0')
			i++;
		else
			break ;
	end = i;
	while (str[i] <= 32)
		if (str[i] != '\0')
			i++;
		else
			break ;
	*index = i;
	i = -1;
	dest = (char**)malloc(sizeof(char*) * end - start + 1);
	while (i++ < end - start)
		dest[i] = str[start + i];
	dest[i] = '\0';
	return (dest);
}

char	**ft_split_whitespace(char *str)


#include <stdio.h>

int main()
{
	char** res;
	for (res = ft_split_whitespaces("asdf qwerty zxcv"); *res != 0; res++)
		printf("'%s',", *res);
	printf("\n");
	for (res = ft_split_whitespaces("s1   s2 \t\n\t\ns3"); *res != 0; res++)
		printf("'%s',", *res);
	printf("\n");
}
