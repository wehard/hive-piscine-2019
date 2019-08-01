/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 11:39:19 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/16 19:34:30 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int		c;
	char	*d;
	char	*s;
	int		dest_len;

	d = dest;
	s = src;
	c = size;
	while (c-- != 0 && *d != '\0')
		d++;
	dest_len = d - dest;
	c = size - dest_len;
	if (c == 0)
		return (dest_len + ft_strlen(src));
	while (*s != '\0')
	{
		if (c != 1)
		{
			*d++ = *s;
			c--;
		}
		s++;
	}
	*d = '\0';
	return (dest_len + (s - src));
}
