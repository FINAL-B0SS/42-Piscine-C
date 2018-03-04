/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 23:07:34 by maljean           #+#    #+#             */
/*   Updated: 2017/11/08 23:18:03 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *list;

	if (*begin_list)
	{
		while ((*begin_list)->next)
		{
			list = *begin_list;
			*begin_list = (*begin_list)->next;
			free(list);
		}
	}
	*begin_list = NULL;
}
