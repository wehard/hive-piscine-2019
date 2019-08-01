/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 09:55:47 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/20 15:05:25 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	match(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2 && *s2 != '\0')
		return (match(s1 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 == 42)
		return (match(s1, s2 + 1));
	if (*s1 != '\0' && *s2 == 42)
		return (match(s1, s2 + 1) || match(s1 + 1, s2));
	return (0);
}
