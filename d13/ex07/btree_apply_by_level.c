/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 17:53:33 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/26 20:08:11 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		btree_level_count(t_btree *root)
{
	int l;
	int r;

	if (!root)
		return (0);
	l = btree_level_count(root->left);
	r = btree_level_count(root->right);
	if (r > l)
		return (r + 1);
	else
		return (l + 1);
}

void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item, int current_level, int is_first_elem))
{
	
}
