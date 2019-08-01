/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 18:52:18 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/14 12:18:21 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_recursive_power.c"

int	main(int argc, char **argv)
{
	if(argc < 3)
		return (0);

	int arg1;
	int arg2;
	int i;

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);

	i = ft_recursive_power(arg1, arg2);

	printf("%d\n", i);
	return (0);
}
