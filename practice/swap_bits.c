/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 21:08:47 by maljean           #+#    #+#             */
/*   Updated: 2017/11/15 21:10:56 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char swap_bits(unsigned char octet)
{
	     return ((octet >> 4) | (octet << 4));
}

int main()
{
	     printf("0x%X\n", swap_bits(0x42));
		      return (0);
}
