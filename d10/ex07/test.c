/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 11:50:51 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/22 20:34:32 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	**ft_split_whitespaces(char *str);
void	ft_sort_wordtab(char **tab);

int	equals(int a, int b)
{
	return (a - b);
}

int	main(void)
{
	char *str = "hello this is a string";
	char **tab;
	
	printf("original\n%s\n", str);
	tab = ft_split_whitespaces(str);
	ft_sort_wordtab(tab);
	
	for (int i = 0; tab[i]; i++)
		printf("%s ", tab[i]);
}
