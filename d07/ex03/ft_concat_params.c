/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 10:49:55 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/17 16:38:58 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	while (*src != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		count;
	int		c;
	int		i;
	int		j;

	count = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j++] != '\0')
			count++;
		i++;
	}
	str = (char*)malloc(sizeof(*str) * (count + 1) + (argc - 1));
	c = 1;
	while (c < argc)
	{
		str = ft_strcat(str, argv[c]);
		if (c < argc - 1)
			str = ft_strcat(str, "\n");
		c++;
	}
	return (str);
}
