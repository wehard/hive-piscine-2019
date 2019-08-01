/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 11:50:51 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/22 20:48:11 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	**ft_split_whitespaces(char *str);
void	ft_advanced_sort_wordtab(char **tab, int(*cmp)(char *, char *));
int		ft_strcmp(char *s1, char *s2);

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
	ft_advanced_sort_wordtab(tab, ft_strcmp);
	
	for (int i = 0; tab[i]; i++)
		printf("%s ", tab[i]);
}
