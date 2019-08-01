/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 09:02:00 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/17 16:38:02 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv);

int		main(/*int argc, char **argv*/)
{
	//char *cstr;
	
	//cstr = ft_concat_params(argc, argv);
	//printf("%s", cstr);

	char* arr[5] = {"NO", "YES", "ARG2", "ARG3", NULL};
	printf("%s", ft_concat_params(4, arr));

	//char* arr[3] = {"NO", "YES", NULL};
	//printf("%s", ft_concat_params(2, arr));

	//free(cstr);
	return (0);
}
