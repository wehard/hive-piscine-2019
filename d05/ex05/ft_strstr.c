/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 16:47:48 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/15 17:51:56 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int c1;
	int c2;

	if (!*to_find)
		return (str);
	c1 = 0;
	while (str[c1] != '\0')
	{
		if (str[c1] == to_find[0])
		{
			c2 = 0;
			while (str[c1 + c2] == to_find[c2] && to_find[c2] != '\0')
			{
				if (to_find[c2 + 1] == '\0')
				{
					return (str += c1);
				}
				c2++;
			}
		}
		c1++;
	}
	return (0);
}
