/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 22:18:11 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/13 19:11:06 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_is_prime.c"

int	ft_atoi(char *str)
{
	int sum;
	int sign;

	if (!*str)
		return (0);
	sign = 1;
	if (str[0] == '-')
	{
		sign = -1;
		str++;
	}
	else if (str[0] == '+')
	{
		str++;
	}
	sum = 0;
	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		sum = sum * 10 + *str - '0';
		str++;
	}
	sum *= sign;
	return (sum);
}

int	main(int argc, char **argv)
{
	int i;
	int n;
	
	if (argc < 2)
		return (0);
	
	n = ft_atoi(argv[1]);
	printf("Testing: %d\n", n);
	i = ft_is_prime(n);
	printf("%d", i);
	return (0);
}
