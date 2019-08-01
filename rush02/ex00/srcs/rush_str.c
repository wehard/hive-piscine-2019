/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 12:59:18 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/28 18:44:01 by nkorhone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/header.h"

#define R00_CHARS "o-o||o-o"
#define R01_CHARS "/*\\**\\*/"
#define R02_CHARS "ABABBCBC"
#define R03_CHARS "ABCBBABC"
#define R04_CHARS "ABCBBCBA"

char	*ft_top(int x, char *c)
{
	char	*str;
	int		s_i;
	int		cur_x;

	str = (char*)malloc(sizeof(char) * x + 2);
	if (!str)
		return (NULL);
	cur_x = 0;
	s_i = 0;
	str[s_i++] = c[0];
	while (cur_x < x - 2)
	{
		str[s_i++] = c[1];
		cur_x++;
	}
	if (x <= 1)
		str[s_i++] = '\n';
	else
	{
		str[s_i++] = c[2];
		str[s_i++] = '\n';
	}
	str[s_i] = '\0';
	return (str);
}

char	*ft_mid(int x, int y, char *c)
{
	char	*str;
	int		s_i;
	int		curxy[2];

	str = (char*)malloc(sizeof(char) * ((x + 1) * (y - 2)) + 1);
	if (!str)
		return (NULL);
	s_i = 0;
	curxy[1] = 0;
	while (curxy[1]++ < y - 2)
	{
		str[s_i++] = c[3];
		curxy[0] = 0;
		while (curxy[0]++ < x - 2)
			str[s_i++] = ' ';
		if (x <= 1)
			str[s_i++] = '\n';
		else
		{
			str[s_i++] = c[4];
			str[s_i++] = '\n';
		}
	}
	str[s_i] = '\0';
	return (str);
}

char	*ft_bot(int x, int y, char *c)
{
	char	*str;
	int		s_i;
	int		cur_x;

	if (y <= 1)
		return (NULL);
	str = (char*)malloc(sizeof(char) * x + 2);
	if (!str)
		return (NULL);
	s_i = 0;
	cur_x = 0;
	str[s_i++] = c[5];
	while (cur_x++ < x - 2)
		str[s_i++] = c[6];
	if (x <= 1)
		str[s_i++] = '\n';
	else
	{
		str[s_i++] = c[7];
		str[s_i++] = '\n';
	}
	str[s_i] = '\0';
	return (str);
}

char	*create_rush(int x, int y, char *str)
{
	char *r_str;
	char *t_str;
	char *m_str;
	char *b_str;

	t_str = ft_top(x, str);
	m_str = ft_mid(x, y, str);
	b_str = ft_bot(x, y, str);
	r_str = (char*)malloc(sizeof(char) * (ft_strlen(t_str) + ft_strlen(m_str) +\
										ft_strlen(b_str)) + 1);
	*r_str = '\0';
	ft_strcat(r_str, t_str);
	ft_strcat(r_str, m_str);
	ft_strcat(r_str, b_str);
	free(t_str);
	free(m_str);
	free(b_str);
	return (r_str);
}

char	*rush_str(int x, int y, int i)
{
	if (x <= 0 || y <= 0)
		return (NULL);
	if (i == 0)
		return (create_rush(x, y, R00_CHARS));
	if (i == 1)
		return (create_rush(x, y, R01_CHARS));
	if (i == 2)
		return (create_rush(x, y, R02_CHARS));
	if (i == 3)
		return (create_rush(x, y, R03_CHARS));
	if (i == 4)
		return (create_rush(x, y, R04_CHARS));
	return (0);
}
