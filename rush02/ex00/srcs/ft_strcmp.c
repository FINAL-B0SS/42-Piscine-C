/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 14:33:44 by maljean           #+#    #+#             */
/*   Updated: 2017/11/12 14:33:46 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int				index;
	unsigned char	*s11;
	unsigned char	*s12;

	s11 = (unsigned char *)s1;
	s12 = (unsigned char *)s2;
	index = 0;
	while (s11[index] || s12[index])
	{
		if (s11[index] != s12[index])
			return (s11[index] - s12[index]);
		index++;
	}
	return (0);
}
