/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 22:47:48 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/15 22:56:06 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_printable_char(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_printable_char(str[i]))
			return (0);
		i++;
	}
	return (1);
}
