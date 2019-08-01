/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 16:58:23 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/11 17:02:40 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include "ft_putstr.c"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	main()
{
	char *str;

	str = "hello world";
	ft_putstr(str);
}
