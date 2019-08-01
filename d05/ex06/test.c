/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 12:41:31 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/15 20:01:27 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char s1[] = "";
	char s2[] = "";
	int n;
	int s;

	n = ft_strcmp(s1, s2);
	s = strcmp(s1, s2);
	printf("My: %d\n", n);
	printf(" : %d\n", s);

	return (0);
}
