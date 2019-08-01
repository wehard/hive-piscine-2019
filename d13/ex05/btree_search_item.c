/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 16:00:33 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/25 17:12:22 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,\
						int (*cmpf)(void *, void *))
{
	t_btree *result;

	if (!root || !data_ref)
		return (0);
	result = 0;
	if (!result)
	{
		result = (btree_search_item(root->left, data_ref, cmpf));
		if (cmpf(root->item, data_ref) == 0)
			return (root);
		if (!result)
			result = (btree_search_item(root->right, data_ref, cmpf));
	}
	return (result);
}
