/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 15:50:29 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/23 20:55:25 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_functions.h"
#include "math.h"
#include "ft_opp.h"

int		validate_args(char **argv)
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
	if (b == 0 && c == '%')
	{
		ft_putstr("Stop : modulo by zero");
		return (0);
	}
	if (c != '+' && c != '-' && c != 42 && c != '/' && c != '%')
	{
		ft_usage(1, 1);
		return (0);
	}
	return (1);
}

void	do_operation(int a, int b, char *op)
{
	int i;

	i = 0;
	while (g_opptab[i].op[0] != '\0')
	{
		if (g_opptab[i].op[0] == op[0] && !op[1])
		{
			ft_putnbr(g_opptab[i].func(a, b));
			return ;
		}
		i++;
	}
	g_opptab[i].func(a, b);
}

int		main(int argc, char **argv)
{
	int a;
	int b;

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
		do_operation(a, b, argv[2]);
		ft_putchar('\n');
	}
	return (0);
}
