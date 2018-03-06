/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 10:13:14 by maljean           #+#    #+#             */
/*   Updated: 2017/10/28 13:48:02 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int count;
	int result;

	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	count = 2;
	result = 1;
	while (count <= nb)
	{
		result *= count;
		count++;
	}
	return (result);
}
