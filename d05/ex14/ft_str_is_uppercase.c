/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 22:42:19 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/15 22:43:42 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	letter_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!letter_is_uppercase(str[i]))
			return (0);
		i++;
	}
	return (1);
}
