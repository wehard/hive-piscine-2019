/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 16:40:32 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/19 22:55:36 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	if (i < n && src[i] == '\0')
	{
		while (dest[i] != '\0')
		{
			dest[i] = '\0';
			++i;
		}
	}
	dest[i] = '\0';
	return (dest);
}

int		count_words(char *str)
{
	int word;
	int n_words;
	int i;

	word = 0;
	n_words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!is_whitespace(str[i]) && word == 0)
		{
			++n_words;
			word = 1;
		}
		else if (is_whitespace(str[i]))
		{
			word = 0;
		}
		++i;
	}
	return (n_words);
}

int		calc_length(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0' && !is_whitespace(str[i]))
		++i;
	return (i);
}

char	**ft_split_whitespaces(char *str)
{
	char	**words;
	int		word;
	int		w_i;
	int		i;
	int		length;

	words = (char **)malloc(count_words(str) * sizeof(char *) + 1);
	word = 0;
	w_i = 0;
	i = -1;
	while (str[++i] != '\0')
	{
		if (!is_whitespace(str[i]) && word == 0)
		{
			word = 1;
			length = calc_length(&str[i]);
			words[w_i] = (char *)malloc(sizeof(char) * (length + 1));
			words[w_i] = ft_strncpy(words[w_i], &str[i], length);
			w_i++;
		}
		else if (is_whitespace(str[i]))
			word = 0;
	}
	words[w_i] = 0;
	return (words);
}
