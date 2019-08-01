/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 08:34:00 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/23 20:55:07 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long long_nb;

	long_nb = nb;
	if (long_nb < 0)
	{
		ft_putchar('-');
		long_nb = long_nb * -1;
	}
	if (long_nb < 10)
	{
		ft_putchar('0' + long_nb);
	}
	else
	{
		ft_putnbr(long_nb / 10);
		ft_putnbr(long_nb % 10);
	}
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		ft_atoi(char *str)
{
	int sum;
	int sign;

	if (!*str)
		return (0);
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	sign = 1;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	if (*str == '+')
		str++;
	sum = 0;
	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		sum = sum * 10 + *str - '0';
		str++;
	}
	sum *= sign;
	return (sum);
}

int		ft_usage(int a, int b)
{
	int n;

	n = a + b;
	ft_putstr("error : only [ + - * / % ] are accepted.");
	return (1);
}
