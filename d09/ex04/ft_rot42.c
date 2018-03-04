/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 22:36:51 by maljean           #+#    #+#             */
/*   Updated: 2017/11/02 23:01:54 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	char_convert(char c)
{
	int		i;
	char	new;

	i = 0;
	new = c;
	if ((c <= 'a' && c >= 'z') && (c <= 'A' && c >= 'Z'))
		return (c);
	while (i < 42)
	{
		new++;
		if (new == 'z' + 1 || new == 'Z' + 1)
			new -= 26;
		i++;
	}
	return (new);
}

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		str[i] = char_convert(str[i]);
		i++;
	}
	return (str);
}
