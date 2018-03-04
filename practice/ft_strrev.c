/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 20:21:55 by maljean           #+#    #+#             */
/*   Updated: 2017/11/15 20:56:33 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strrev(char *str)
{
	int i = 0;
	int j = 0;
	char temp;
	while (str[j])
		j++;
	while (i < j - 1)
	{
		temp = str[i];
		str[i] = str[j - 1];
		str[j - 1] = temp;
		j--;
		i++;
	}
	return (str);
}

int main()
{
	char str[] = "abcd";
	printf("%s", ft_strrev(str));
	return (0);
}
