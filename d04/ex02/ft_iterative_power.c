/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 11:46:45 by maljean           #+#    #+#             */
/*   Updated: 2017/10/28 14:00:18 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int nbr;
	int result;

	if (power < 0)
		return (0);
	nbr = 0;
	result = 1;
	while (nbr < power)
	{
		result *= nb;
		nbr++;
	}
	return (result);
}
