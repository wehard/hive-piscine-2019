/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 16:40:32 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/19 00:45:12 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_whitespace(char c)
{
	if (c <= 32 || c == 126 || c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int		ft_wordlen(char *str, int index)
{
	int c;

	c = 0;
	while (str[index] != '\0' && !is_whitespace(str[index]))
	{
		c++;
		index++;
	}
	return (c);
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

int		count_words(char *str)
{
	int c;
	int i;

	c = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && !is_whitespace(str[i]))
			c++;
		if (!is_whitespace(str[i]) && is_whitespace(str[i - 1]))
			c++;
		i++;
	}
	return (c);
}

char	**ft_split_whitespaces(char *str)
{
	char	**words;
	int		w_i;
	int		i;
	int		c;

	words = (char**)malloc(sizeof(char*) * count_words(str) + 1);
	w_i = 0;
	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if (is_whitespace(str[i]))
			i++;
		if ((i == 0 && !is_whitespace(str[i])) ||\
			(i > 0 && (!is_whitespace(str[i]) && is_whitespace(str[i - 1]))))
		{
			words[w_i] = (char*)malloc(sizeof(char) * ft_wordlen(str, i) + 1);
			ft_strncpy(words[w_i], &str[i], ft_wordlen(str, i));
			w_i++;
		}
		i++;
	}
	words[w_i] = 0;
	return (words);
}
