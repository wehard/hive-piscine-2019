/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 14:55:59 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/31 23:09:34 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src, int size)
{
	int		i;
	char	*cpy;

	cpy = (char *)malloc(sizeof(char) * size + 1);
	if (!cpy)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

char	*ft_strcat(char *dest, char *src, int d_index)
{
	int i;

	if (!src)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[d_index + i] = src[i];
		i++;
	}
	dest[d_index + i] = '\0';
	return (dest);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n && src[i] == '\0')
	{
		while (dest[i] != '\0' && i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
