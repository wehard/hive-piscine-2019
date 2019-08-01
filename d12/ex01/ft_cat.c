/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 14:13:16 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/25 19:57:52 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <errno.h>
#include "ft_utils.h"

#define BUF_SIZE 28000

void	ft_print_error(char *path)
{
	if (errno == 2)
	{
		ft_putstr("ft_cat: ", 2);
		ft_putstr(path, 2);
		ft_putstr(": No such file or directory", 2);
	}
	if (errno == 13)
	{
		ft_putstr("ft_cat: ", 2);
		ft_putstr(path, 2);
		ft_putstr(": Permission denied", 2);
	}
	if (errno == 21)
	{
		ft_putstr("ft_cat: ", 2);
		ft_putstr(path, 2);
		ft_putstr(": Is a directory", 2);
	}
	ft_putstr("\n", 1);
}

void	ft_read_stdin(void)
{
	char buffer;

	while (read(0, &buffer, 1) != 0)
	{
		write(1, &buffer, 1);
	}
}

int		ft_print_file(char *path)
{
	int		fd;
	char	buffer[BUF_SIZE];
	int		e;
	int		ret;

	e = 0;
	fd = open(path, O_RDWR);
	if (fd >= 0)
	{
		while ((ret = read(fd, buffer, BUF_SIZE)))
		{
			buffer[ret] = '\0';
			write(1, buffer, ret);
		}
		close(fd);
	}
	else
	{
		ft_print_error(path);
		errno = 0;
		return (1);
	}
	return (e);
}

int		main(int argc, char **argv)
{
	int i;
	int error;

	if (argc == 1)
	{
		ft_read_stdin();
		return (0);
	}
	i = 1;
	error = 0;
	while (i < argc)
	{
		error += ft_print_file(argv[i]);
		i++;
	}
	if (error > 0)
		return (1);
	return (0);
}
