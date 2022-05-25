/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 01:30:39 by mcarniel          #+#    #+#             */
/*   Updated: 2022/04/28 03:25:33 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The  memchr() function scans the initial n bytes of the memory area pointed
to by s for the first instance of c.  Both c and the bytes of the memory area 
pointed to by s are interpreted as unsigned char. 

RETURN VALUE The memchr() function return a pointer to the matching byte or 
NULL if the character does not occur in the given memory area.*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char) c)
			return (str + i);
		i++;
	}
	return (NULL);
}
