/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:42:15 by maljean           #+#    #+#             */
/*   Updated: 2017/11/10 22:36:40 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree		*btree_create_node(void *item)
{
	t_btree *parent;

	parent = malloc(sizeof(t_btree));
	parent->item = item;
	parent->left = NULL;
	parent->right = NULL;
	return (parent);
}
