/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 04:58:38 by maljean           #+#    #+#             */
/*   Updated: 2017/11/16 05:18:25 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_check(int start, int end)
{
	if (start == end)
		return (1);
	if (start > end)
		return (start - end);
	if (start < end)
		return (end - start);
	else
		return (0);
}

int	*ft_rrange(int start, int end)
{
	int i = 0;
	int *dest;
	
	dest = (int*)malloc(sizeof(int) * ft_check(start, end));
	if (start > end)
	{
		while (end <= start)
		{
			dest[i] = end;
			end++;
			i++;
		}
	}
	else if (start < end)
	{
		while (end >= start)
		{
			dest[i] = end;
			end--;
			i++;
		}
	}
	return (dest);
}

int main()
{
	int i = 0;
	int *res = ft_rrange(1, 3);
	while (i < 3)
	{
		printf("%d,", res[i]);
		i++;
	}
	printf("\n");
}
