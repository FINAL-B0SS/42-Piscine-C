/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 23:21:11 by maljean           #+#    #+#             */
/*   Updated: 2017/11/08 23:21:41 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list		*list;

	list = begin_list;
	while (nbr > 1)
	{
		if (!list)
			return (0);
		list = list->next;
		nbr--;
	}
	return (list);
}
