/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 17:04:23 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/28 20:46:41 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include "includes/header.h"
#include "includes/ft_list.h"

#define BUF_SIZE 2048

void	print_rush_info(int x, int y, int i)
{
	ft_putstr("[rush-0");
	ft_putnbr(i);
	ft_putstr("] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
}

t_list	*read_stdin(void)
{
	char	buf[BUF_SIZE + 1];
	t_list	*list;
	int		bytes;

	list = NULL;
	while ((bytes = read(0, buf, BUF_SIZE)))
	{
		buf[bytes] = '\0';
		ft_list_push_back(&list, ft_strdup(buf));
	}
	return (list);
}

char	*create_str_from_list_data(t_list *list)
{
	char	*str;
	int		e_count;
	int		str_len;
	int		i;

	str_len = 0;
	e_count = ft_list_size(list);
	i = 0;
	while (i < e_count)
	{
		str_len += ft_strlen(ft_list_at(list, i)->data);
		i++;
	}
	str = (char*)malloc(sizeof(char) * str_len + 1);
	i = 0;
	while (i < e_count)
	{
		ft_strcat(str, ft_list_at(list, i)->data);
		i++;
	}
	return (str);
}

int		check_rushes(char *str)
{
	char	*r_str;
	int		i;
	int		rushes;
	int		xy[2];

	xy[0] = ft_check_x(str);
	xy[1] = ft_check_y(str);
	if (xy[0] <= 0 || xy[1] <= 0)
		return (0);
	rushes = 0;
	i = 0;
	while (i < 5)
	{
		r_str = rush_str(xy[0], xy[1], i);
		if (ft_strcmp(str, r_str) == 0)
		{
			if (rushes > 0)
				ft_putstr(" || ");
			print_rush_info(xy[0], xy[1], i);
			rushes++;
		}
		free(r_str);
		i++;
	}
	return (rushes);
}

int		main(void)
{
	char	*str;
	t_list	*list;
	int		rush_count;

	list = NULL;
	list = read_stdin();
	if (list)
		str = create_str_from_list_data(list);
	else
	{
		ft_putstr("error\n");
		return (1);
	}
	rush_count = check_rushes(str);
	if (rush_count == 0)
	{
		ft_putstr("error\n");
		return (1);
	}
	ft_putstr("\n");
	free(str);
	ft_list_clear(&list);
	return (0);
}
