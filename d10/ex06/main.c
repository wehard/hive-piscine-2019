/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 15:50:29 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/22 21:54:00 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "operation.h"

int	validate_args(char **argv)
{
	char	c;
	int		a;
	int		b;

	c = argv[2][0];
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (b == 0 && c == '/')
	{
		ft_putstr("Stop : division by zero");
		return (0);
	}
	if ((a == 0 || b == 0) && c == '%')
	{
		ft_putstr("Stop : modulo by zero");
		return (0);
	}
	if (c != '+' && c != '-' && c != 42 && c != '/' && c != '%')
	{
		ft_putnbr(0);
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int a;
	int b;
	int result;

	if (argc != 4)
		return (0);
	if (!validate_args(argv))
	{
		ft_putchar('\n');
		return (0);
	}
	else
	{
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[3]);
		result = do_operation(a, b, g_select_operation(argv[2][0]));
		ft_putnbr(result);
		ft_putchar('\n');
	}
	return (0);
}
