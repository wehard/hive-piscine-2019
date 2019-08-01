/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 22:21:26 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/15 22:27:11 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_nbr(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!is_nbr(*str))
			return (0);
		str++;
	}
	return (1);
}
