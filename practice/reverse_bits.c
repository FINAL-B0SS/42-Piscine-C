/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 13:47:22 by maljean           #+#    #+#             */
/*   Updated: 2017/11/16 08:30:27 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned int	r = 0;
	unsigned		byte = 8;

	while (byte--)
	{
		r = (r << 1) | (byte & 1);
		byte >>= 1;
	}
	return (r);
}
