/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 17:16:49 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/11 20:10:30 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int c;

	c = 0;
	while (*str != '\0')
	{
		c++;
		str++;
	}
	return (c);
}

char	*ft_strrev(char *str)
{
	int		c;
	int		str_len;
	char	char_temp;

	str_len = ft_strlen(str);
	c = 0;
	while (str_len - 1 > c)
	{
		char_temp = str[c];
		str[c] = str[str_len - 1];
		str[str_len - 1] = char_temp;
		str_len--;
		c++;
	}
	return (str);
}
