/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 14:31:51 by maljean           #+#    #+#             */
/*   Updated: 2017/11/12 14:32:08 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# define BUF_SIZE 4096

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_putnbr(int nb);
char	*rush00_0(int x, int y);
char	*rush00_1(int x, int y);
char	*rush00_2(int x, int y);
char	*rush00_3(int x, int y);
char	*rush00_4(int x, int y);
char	*generate_rush(int x, int y, char *pattern);
char	*generate_line(int x, char *rush, char *pattern, int line);
int		ft_put_rush(char *rush, int x, int y, int index);
void	rush(int x, int y);

#endif
