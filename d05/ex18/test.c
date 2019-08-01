/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 12:29:05 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/16 18:26:39 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char    dest[256] = "\0zxcvzxcvzxcvxzcvzxcvzxcv";
	//    printf("%s\n", strncat(dest, src, 3));
	printf("my: %u\n", ft_strlcat(dest, "asdf", 16));
	printf("strl %lu\n", strlcat(dest, "asdf", 16));
	printf("my: %u\n", ft_strlcat(dest, "asdf", 6));
	printf("strl %lu\n", strlcat(dest, "asdf", 6));
	printf("my: %u\n", ft_strlcat(dest, "asdf", 4));
	printf("strl %lu\n", strlcat(dest, "asdf", 4));
	printf("my: %u\n", ft_strlcat(dest, "", 16));
	printf("strl %lu\n", strlcat(dest, "", 16));
	printf("my: %u\n", ft_strlcat(dest, "asdf", 0));
	printf("strl %lu\n", strlcat(dest, "asdf", 0));
	return (0);
}
