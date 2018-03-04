/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 15:02:58 by maljean           #+#    #+#             */
/*   Updated: 2017/10/31 19:37:09 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (src[i] || dest[i])
		j = 1;
	while (dest[i] && i < size)
		i++;
	if (dest[i])
	{
		i = 0;
		while (src[i])
			i++;
		return (size + i);
	}
	while (*src && i < size - 1)
		dest[i++] = *src++;
	dest[i] = '\0';
	while (src[i])
		i++;
	return (i + 1 - j);
}
