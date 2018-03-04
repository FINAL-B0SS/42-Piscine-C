/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 00:44:44 by maljean           #+#    #+#             */
/*   Updated: 2017/11/02 14:24:42 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		params_size(int argc, char **argv)
{
	int i;
	int j;
	int size;

	i = 1;
	size = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			size++;
			j++;
		}
		i++;
	}
	if (argc > 2)
		size += argc - 2;
	return (size);
}

char	ft_concat_params(int argc, char **argv)
{
	int		i;
	int		k;
	int		j;
	int		*size;
	char	*str;

	i = 1;
	k = 0;
	size = params_size(argc, argv);
	*str = (char*)malloc((size + 1) * sizeof(char));
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			str[k] = argv[i][j];
			k++;
			j++;
		}
		if (i < argc - 1)
			str[k++] = '\n';
		i++;
	}
	str[k] = '\0';
	return (str);
}
