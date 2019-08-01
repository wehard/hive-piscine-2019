/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 09:29:37 by mtuomine          #+#    #+#             */
/*   Updated: 2019/07/31 23:16:58 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IO_H
# define IO_H
# include "ft_list.h"
# include "bsq_map_info.h"

# define BUF_SIZE 26000

int				process_stdin_map(void);
int				process_map_file(char *paths);
char			*get_map_str_from_file_content(t_list *fcont_list, int *l_size,\
				unsigned int *map_bytes);
t_bsq_map_info	*parse_file_header(t_list *fcont_list);

#endif
