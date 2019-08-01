/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 17:01:36 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/28 17:02:04 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "includes/header.h"

int	main(int argc, char **argv)
{
	char	*str;
	int		x;
	int		y;

	if (argc != 3)
		return (1);
	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[2]);
	str = rush_str(x, y, RUSH);
	ft_putstr(str);
	free(str);
	return (0);
}
