/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_functions.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 11:18:27 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/31 22:01:30 by mtuomine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STR_FUNCTIONS_H
# define FT_STR_FUNCTIONS_H

int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src, int d_index);
char	*ft_strdup(char *src, int size);
char	*ft_strncpy(char *dest, char *src, unsigned int n);

#endif
