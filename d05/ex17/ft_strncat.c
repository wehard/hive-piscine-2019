/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 23:22:48 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/15 23:25:05 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int n;

	i = 0;
	while (dest[i] != '\0')
		i++;
	n = 0;
	while (*src != '\0' && n < nb)
	{
		dest[i] = *src;
		i++;
		src++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}
