/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 12:41:31 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/16 19:58:45 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char src[] = "kakkakakka";
	char src1[] = "kakkakakka";
	char dest[] = "paska";
	char dest1[] = "paska";
	char *ret;
	char *ret2;
	ret = ft_strcpy(dest, src);
	ret2 = strcpy(dest1, src1);
	
	printf("my: %s\n", ret);
	printf("  : %s\n", ret2);

	return (0);
}
