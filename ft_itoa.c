/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 21:15:42 by mcarniel          #+#    #+#             */
/*   Updated: 2022/04/25 21:16:26 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns a string representing the 
integer received as an argument. Negative nums must be handled.

RETURN VALUES The string representing the integer. 
NULL if the allocation fails.*/

#include "libft.h"

static size_t	is_negative(int n)
{
	if (n < 0)
		return (1);
	else
		return (0);
}

static size_t	count_digits(size_t n)
{
	unsigned int	digits;

	if (n == 0)
		return (1);
	digits = 0;
	while (n > 0)
	{
		digits++;
		n /= 10;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	negative;
	long int		num;
	unsigned int	digits;

	negative = is_negative(n);
	num = n;
	if (negative == 1)
		num *= -1;
	digits = count_digits(num);
	str = (char *)malloc(digits + negative + 1);
	if (str == NULL)
		return (NULL);
	if (negative == 1)
		str[0] = '-';
	str[digits + negative] = '\0';
	while (digits > 0)
	{
		str[(digits - 1) + negative] = (num % 10) + '0';
		num /= 10;
		digits--;
	}
	return (str);
}
