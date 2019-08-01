/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 20:50:36 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/16 21:50:26 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_letter(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int		is_nbr(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_letter(str[i]) && str[i] < 'a')
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if ((i == 0 && is_letter(str[i])) ||
			((is_letter(str[i]) && !is_letter(str[i - 1]))
			&& !is_nbr(str[i - 1])))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
