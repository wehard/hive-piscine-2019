/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 22:34:43 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/15 23:29:48 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, int nb);

int		main(void)
{
	char dest[64] = "stringone.";
	char dest2[64] = "stringone.";
	char src[] = "stringtwo";
	int nb = 6;
	printf("%s\n", dest);
	printf("string.h: %s\n", strncat(dest, src, nb));  
	printf("          %s\n", ft_strncat(dest2, src, nb));

	return (0);
}
