/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 10:51:49 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/15 12:20:14 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int sum;
	int sign;

	if (!*str)
		return (0);
	while (*str == ' ' || *str == '\t' || *str == '\n' ||
		*str == '\v' || *str == '\f' || *str == '\r')
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
