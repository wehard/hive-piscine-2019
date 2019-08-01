/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 20:32:23 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/16 21:44:47 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char str[] = "!asdf qWe_rty zXCv 1a00tis asdf-wwerty 1xc2v 100Tis";
	char str2[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("orig: %s\n", str);
	printf("%s\n", ft_strcapitalize(str));
	printf("orig: %s\n", str2);
	printf("%s\n", ft_strcapitalize(str2));
	return (0);
}
