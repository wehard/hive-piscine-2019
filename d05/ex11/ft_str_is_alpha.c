/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 22:12:45 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/15 22:15:33 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_letter(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!is_letter(*str))
			return (0);
		str++;
	}
	return (1);
}
