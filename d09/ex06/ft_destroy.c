/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 23:58:05 by maljean           #+#    #+#             */
/*   Updated: 2017/11/02 23:58:55 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	while (factory)
	{
		while (factory[0])
		{
			while (factory[0][0])
			{
				free(factory[0][0]);
				factory[0][0]++;
			}
			free(factory[0]);
			factory[0]++;
		}
		free(factory);
		factory++;
	}
}
