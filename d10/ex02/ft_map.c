/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 18:09:20 by maljean           #+#    #+#             */
/*   Updated: 2017/11/06 18:27:40 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *temp;

	i = -1;
	temp = (int*)malloc(sizeof(int) * length);
	while (i++ < length)
		temp[i] = f(tab[i]);
	return (temp);
}
