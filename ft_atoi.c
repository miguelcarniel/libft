/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:40:01 by mcarniel          #+#    #+#             */
/*   Updated: 2022/04/27 04:09:21 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The atoi() function converts the initial portion
of the string pointed to by nptr to int.

RETURN VALUE The converted value.*/

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int				num;
	unsigned int	i;
	int				sign;

	sign = 1;
	num = 0;
	i = 0;
	while ((nptr[i] >= '\t' && nptr[i] <= '\r') || nptr[i] == ' ')
		i++;
	if ((nptr[i] == '-' || nptr[i] == '+'))
		if (nptr[i++] == '-')
			sign *= -1;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = (nptr[i] - '0') + (num * 10);
		i++;
	}
	return (num * sign);
}
