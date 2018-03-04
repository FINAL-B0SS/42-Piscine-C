/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 19:56:59 by maljean           #+#    #+#             */
/*   Updated: 2017/11/02 20:22:03 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	hour1(int hour)
{
	if (hour == 0)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 A.M. AND 1.00 A.M.\n");
	else if (hour == 1)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 1.00 A.M. AND 2.00 A.M.\n");
	else if (hour == 2)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 2.00 A.M. AND 3.00 A.M.\n");
	else if (hour == 3)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 3.00 A.M. AND 4.00 A.M.\n");
	else if (hour == 4)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 4.00 A.M. AND 5.00 A.M.\n");
	else if (hour == 5)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 5.00 A.M. AND 6.00 A.M.\n");
	else if (hour == 6)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 6.00 A.M. AND 7.00 A.M.\n");
	else if (hour == 7)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 7.00 A.M. AND 8.00 A.M.\n");
	else if (hour == 8)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 8.00 A.M. AND 9.00 A.M.\n");
	else if (hour == 9)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 9.00 A.M. AND 10.00 A.M.\n");
}

void	hour2(int hour)
{
	if (hour == 10)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 10.00 A.M. AND 11.00 A.M.\n");
	else if (hour == 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 A.M. AND 12.00 P.M.\n");
	else if (hour == 12)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 P.M. AND 1.00 P.M.\n");
	else if (hour == 13)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 1.00 P.M. AND 2.00 P.M.\n");
	else if (hour == 14)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 2.00 P.M. AND 3.00 P.M.\n");
	else if (hour == 15)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 3.00 P.M. AND 4.00 P.M.\n");
	else if (hour == 16)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 4.00 P.M. AND 5.00 P.M.\n");
	else if (hour == 17)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 5.00 P.M. AND 6.00 P.M.\n");
	else if (hour == 18)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 6.00 P.M. AND 7.00 P.M.\n");
	else if (hour == 19)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 7.00 P.M. AND 8.00 P.M.\n");
}

void	hour3(int hour)
{
	if (hour == 20)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 8.00 P.M. AND 9.00 P.M.\n");
	else if (hour == 21)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 9.00 P.M. AND 10.00 P.M.\n");
	else if (hour == 22)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 10.00 P.M. AND 11.00 P.M.\n");
	else if (hour == 23)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 P.M. AND 12.00 A.M.\n");
	else if (hour == 24)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 A.M. AND 1.00 A.M.\n");
}

void	ft_takes_place(int hour)
{
	if (hour >= 0 && hour <= 9)
		hour1(hour);
	else if (hour >= 10 && hour <= 19)
		hour2(hour);
	else if (hour >= 20 && hour <= 24)
		hour3(hour);
}
