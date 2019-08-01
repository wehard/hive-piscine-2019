/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 11:11:39 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/25 20:49:49 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "ft_functions.h"

#define BUF_SIZE 28000

int	throw_error(char *errorstr)
{
	ft_putstr(errorstr);
	return (1);
}

int	main(int argc, char **argv)
{
	int		fd;
	char	buffer[BUF_SIZE + 1];
	int		ret;

	if (argc == 1)
		return (throw_error("File name missing.\n"));
	if (argc > 2)
		return (throw_error("Too many arguments.\n"));
	fd = open(argv[1], O_RDWR);
	if (fd < 0)
		return (1);
	else
	{
		while ((ret = read(fd, buffer, BUF_SIZE)))
		{
			buffer[ret] = '\0';
			write(1, buffer, ret);
		}
		close(fd);
	}
	return (0);
}
