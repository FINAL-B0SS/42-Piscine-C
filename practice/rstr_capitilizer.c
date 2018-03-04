/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitilizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 14:40:23 by maljean           #+#    #+#             */
/*   Updated: 2017/11/16 15:20:06 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void cap(char *str)
{
	int i = 0;
	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		else if(str[i + 1] == '\0' || str[i + 1] <= 32)
			str[i] -= 32;
		i++;
	}
	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	int i = 1;
	while(av[i])
	{
		cap(av[i]);
		write(1, "\n", 1);
		i++;
	}
	if( ac < 2)
		write(1, "\n", 1);
	return (0);
I}
