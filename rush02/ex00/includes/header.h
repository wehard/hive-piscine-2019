/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <willehard@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 14:42:18 by wkorande          #+#    #+#             */
/*   Updated: 2019/07/28 18:45:33 by nkorhone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

int		ft_check_x(char *str);
int		ft_check_y(char *str);
char	*rush_str(int x, int y, int i);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
char	*ft_strcat(char *dest, char *src);
char	*ft_strdup(char *src);

#endif
