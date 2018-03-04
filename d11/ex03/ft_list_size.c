/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:31:10 by maljean           #+#    #+#             */
/*   Updated: 2017/11/08 18:13:51 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*new;
	int		size;

	size = 0;
	new = begin_list;
	while (new)
	{
		new = new->next;
		size++;
	}
	return (size);
}
