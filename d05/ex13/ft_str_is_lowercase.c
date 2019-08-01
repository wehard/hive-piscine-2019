/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 22:29:27 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/15 22:38:15 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	letter_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!letter_is_lowercase(str[i]))
			return (0);
		i++;
	}
	return (1);
}
