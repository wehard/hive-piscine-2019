/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_all.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 10:01:19 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/25 10:02:21 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_ALL_H
# define FT_BTREE_ALL_H

typedef struct		s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}					t_btree;

t_btree				*btree_create_node(void *item);
void				btree_apply_prefix(t_btree *root, void (*applyf)(void *));
void				btree_apply_infix(t_btree *root, void (*applyf)(void *));
void				btree_apply_suffix(t_btree *root, void (*applyf)(void *));
void				btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *));
void				*btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *));
int					btree_level_count(t_btree *root);
void				btree_apply_by_level(t_btree *root, void (*applyf)(void *item, int current_level, int is_first_elem));

#endif
