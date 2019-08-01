/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 00:48:45 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/19 01:10:39 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	int		a;
	char	*s;
	int		alert;

	a = 1;
	alert = 0;
	while (a < argc)
	{
		s = ft_strlowcase(argv[a]);
		if (ft_strcmp(s, "president") == 0)
			alert = 1;
		if (ft_strcmp(s, "attack") == 0)
			alert = 1;
		if (ft_strcmp(s, "bauer") == 0)
			alert = 1;
		a++;
	}
	if (alert)
		write(1, "Alert!!!\n", 10);
	return (0);
}
