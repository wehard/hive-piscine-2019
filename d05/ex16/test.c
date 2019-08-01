/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 22:34:43 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/15 23:21:07 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char dest[64] = "stringone.";
	char src[] = "stringtwo";
	printf("%s\n", dest);
	printf("%s\n", ft_strcat(dest, src));

	return (0);
}
