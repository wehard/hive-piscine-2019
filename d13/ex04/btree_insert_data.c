/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 14:49:57 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/27 10:19:04 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,\
						int (*cmpf)(void *, void *))
{
	if (!root || !*root || !item)
	{
		if (item && root)
			*root = btree_create_node(item);
		return ;
	}
	if (cmpf((*root)->item, item) <= 0)
	{
		if ((*root)->right)
			btree_insert_data(&(*root)->right, item, cmpf);
		else
			(*root)->right = btree_create_node(item);
	}
	else
	{
		if ((*root)->left)
			btree_insert_data(&(*root)->left, item, cmpf);
		else
			(*root)->left = btree_create_node(item);
	}
}
