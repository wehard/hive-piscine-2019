/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 12:41:31 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/15 20:23:25 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char s1[] = "kakka";
	char s2[] = "Aakka";
	int n;
	int s;
	int i;
	
	i = 4;
	n = ft_strncmp(s1, s2, i);
	s = strncmp(s1, s2, i);
	printf("My: %d\n", n);
	printf("  : %d\n", s);

	return (0);
}
