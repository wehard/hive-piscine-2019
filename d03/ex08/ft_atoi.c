/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 20:09:54 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/12 12:16:38 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
