/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 11:54:31 by maljean           #+#    #+#             */
/*   Updated: 2017/10/28 14:33:41 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int nbr;
	int bookmark;

	if (nb <= 1)
	{
		return (0);
	}
	else
	{
		nbr = 1;
		bookmark = 1;
		while (nbr <= nb / 2)
		{
			if (nb % nbr == 0 && !(nbr == 1))
			{
				bookmark = 0;
				break ;
			}
			nbr++;
		}
	}
	return (bookmark);
}
