/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 16:38:18 by maljean           #+#    #+#             */
/*   Updated: 2017/11/03 16:38:44 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H
# include <unistd.h>
# define EXIT_SUCCESS	0
# define OPEN			1
# define CLOSE			0

typedef int		t_ft_bool;
typedef struct	s_door
{
	int state;
}				t_door;
void			ft_putstr(char *str);
void			open_door(t_door *door);
void			close_door(t_door *door);
t_ft_bool		is_door_open(t_door *door);
t_ft_bool		is_door_close(t_door *door);

#endif
