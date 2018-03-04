/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitilizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 13:30:56 by maljean           #+#    #+#             */
/*   Updated: 2017/11/17 04:00:35 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <unistd.h>

void cap(char *str)
{
	int i = 0; 
	while(str[i] != '\0')
	{
		while(str[i] <= 32)
			i++;
		if(str[0] >= 97 && str[i] <= 122)
			str[0] -= 32;
		if(str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		if(str[i - 1] <= 32)
			str[i] -= 32;
		i++;
	}
	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	int i = 1;
	while(i < ac)
	{
		cap(av[i]);
		write(1, "\n", 1);
		i++;
	}
	if (ac < 1)
		write(1, "\n", 1);
	return(0);
}
