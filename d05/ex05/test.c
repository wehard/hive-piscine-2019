/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 12:41:31 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/15 21:28:40 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char str[] = "werty";
	char tofind[] = "qwerty";
	char *ret;

	ret = ft_strstr(str, tofind);
	
	printf("%s\n", ret);

	return (0);
}
