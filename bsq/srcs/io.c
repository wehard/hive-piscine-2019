/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 08:16:29 by mtuomine          #+#    #+#             */
/*   Updated: 2019/07/31 23:17:22 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "../includes/bsq_map.h"
#include "../includes/ft_list.h"
#include "../includes/ft_str_functions.h"
#include "../includes/io.h"
#include "../includes/validator.h"

t_list	*read_to_list(int fd, int *l_size, unsigned int *map_bytes)
{
	char		buf[BUF_SIZE + 1];
	int			n_bytes;
	t_list		*map_list;
	char		*temp;

	map_list = NULL;
	temp = NULL;
	n_bytes = 0;
	while ((n_bytes = read(fd, buf, BUF_SIZE)) > 0)
	{
		buf[n_bytes] = '\0';
		temp = ft_strdup(buf, n_bytes + 1);
		ft_list_push_back(&map_list, temp);
		*map_bytes += n_bytes;
		*l_size += 1;
	}
	return (map_list);
}

int		process_map(t_bsq_map_info *map_info, t_list *map_list, int *l_size,\
				unsigned int *map_bytes)
{
	char	*map_str;
	t_vdata	*vdata;

	vdata = create_vdata();
	map_str = NULL;
	map_str = get_map_str_from_file_content(map_list, l_size, map_bytes);
	map_info->width = calculate_width(map_str);
	if (!is_header_valid(map_info))
		return (1);
	if (!is_map_valid(map_str, map_info, vdata))
		return (1);
	free(vdata);
	process_and_display_bsq_map(map_info, map_str);
	ft_list_clear(&map_list);
	return (0);
}

int		process_stdin_map(void)
{
	int				n_bytes;
	t_list			*map_list;
	t_bsq_map_info	*map_info;
	int				l_size;
	unsigned int	map_bytes;

	map_bytes = 0;
	l_size = 0;
	n_bytes = 0;
	map_list = NULL;
	map_info = NULL;
	map_list = read_to_list(0, &l_size, &map_bytes);
	map_info = parse_file_header(map_list);
	if (map_info == NULL || map_list == NULL)
		return (1);
	else
		return (process_map(map_info, map_list, &l_size, &map_bytes));
	return (0);
}

int		process_map_file(char *path)
{
	int				fd;
	t_list			*fcont_list;
	t_bsq_map_info	*map_info;
	int				l_size;
	unsigned int	map_bytes;

	map_bytes = 0;
	l_size = 0;
	fcont_list = NULL;
	map_info = NULL;
	fd = open(path, O_RDONLY);
	if (fd < 0)
	{
		return (1);
	}
	fcont_list = read_to_list(fd, &l_size, &map_bytes);
	map_info = parse_file_header(fcont_list);
	if (map_info == NULL)
	{
		close(fd);
		return (1);
	}
	close(fd);
	return (process_map(map_info, fcont_list, &l_size, &map_bytes));
}
