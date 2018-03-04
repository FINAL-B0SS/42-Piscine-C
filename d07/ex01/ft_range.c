/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 00:19:29 by maljean           #+#    #+#             */
/*   Updated: 2017/11/02 14:14:05 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *range;

	i = 0;
	if (min >= max)
		return (0);
	*range = (int*)malloc((max - (min - 1)) * sizeof(int));
	while (min <= max)
	{
		range[i] = min;
		min++;
		i++;
	}
	range[i] = min;
	return (range);
}
