/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 01:08:29 by mcarniel          #+#    #+#             */
/*   Updated: 2022/04/26 17:01:40 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The  strcmp()  function  compares the two strings s1 and s2.

RETURN VALUE The  strncmp() function return an integer less than, 
equal to, or greater than zero if s1 (or the first n bytes thereof)
is found, respectively, to be less than, to match, or be greater than s2. */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
