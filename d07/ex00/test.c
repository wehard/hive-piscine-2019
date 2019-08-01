/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 09:02:00 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/17 09:07:33 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *src);

int		main(void)
{
	char str[] = "strdup";
	char *cpy;
	printf("%s\n", str);
	cpy = ft_strdup(str); 
	printf("%s\n", cpy);

	return (0);
}
