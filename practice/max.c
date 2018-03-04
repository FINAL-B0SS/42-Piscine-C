/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 19:24:27 by maljean           #+#    #+#             */
/*   Updated: 2017/11/15 19:48:10 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int* tab, unsigned int len)
{
	unsigned int i = 0;
	int x = 0;
	while(i < len)
	{
		if (tab[i] > x)
			x = tab[i];
		i++;
	}
	return (x);
}

#include <stdio.h>
int main()
{
	int tab[] = {6, 7, 8, 9};
	printf("%d", max(tab, 4));
	return(0);
}
