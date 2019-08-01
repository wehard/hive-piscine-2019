/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 18:37:41 by mtuomine          #+#    #+#             */
/*   Updated: 2019/07/31 22:22:04 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "io.h"

int	main(int argc, char **argv)
{
	int		i;
	int		errors;

	errors = 0;
	if (argc == 1)
	{
		errors += process_stdin_map();
		if (errors > 0)
			write(2, "map error\n", 10);
		return (errors);
	}
	i = 1;
	while (i < argc)
	{
		if (process_map_file(argv[i]) == 1)
		{
			errors++;
			write(2, "map error\n", 10);
		}
		if (i < argc - 1)
			write(1, "\n", 1);
		i++;
	}
	return (errors);
}
