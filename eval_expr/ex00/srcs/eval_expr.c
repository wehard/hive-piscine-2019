/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 16:10:31 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/28 19:29:56 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_functions.h"

int	parse_deep(char **xpr)
{
	int nb1;

	while (**xpr == ' ')
		(*xpr)++;
	if (**xpr == '(')
	{
		(*xpr)++;
		nb1 = parse_add_sub(xpr);
		if (**xpr == ')')
		{
			(*xpr)++;
		}
		return (nb1);
	}
	return (ft_atoi_dp(xpr));
}

int	parse_mul_div_mod(char **xpr)
{
	int		nb1;
	int		nb2;
	char	op;

	nb1 = parse_deep(xpr);
	while (**xpr)
	{
		while (**xpr == ' ')
			(*xpr)++;
		op = **xpr;
		if (op != '*' && op != '/' && op != '%')
			return (nb1);
		(*xpr)++;
		nb2 = parse_deep(xpr);
		if (op == '/')
			nb1 = nb1 / nb2;
		else if (op == '*')
			nb1 = nb1 * nb2;
		else if (op == '%')
			nb1 = nb1 % nb2;
	}
	return (nb1);
}

int	parse_add_sub(char **xpr)
{
	int		nb1;
	int		nb2;
	char	op;

	nb1 = parse_mul_div_mod(xpr);
	while (**xpr)
	{
		while (**xpr == ' ')
			(*xpr)++;
		op = **xpr;
		if (op != '-' && op != '+')
		{
			return (nb1);
		}
		(*xpr)++;
		nb2 = parse_mul_div_mod(xpr);
		if (op == '-')
			nb1 = nb1 - nb2;
		else if (op == '+')
			nb1 = nb1 + nb2;
	}
	return (nb1);
}

int	eval_expr(char *str)
{
	return (parse_add_sub(&str));
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
