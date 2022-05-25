/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 14:19:40 by mcarniel          #+#    #+#             */
/*   Updated: 2022/04/28 15:27:40 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The memset() function fills the first n bytes of the memory area pointed to
by s with the constant byte c.

RETURN VALUE The memset() function returns a pointer to the memory area s.*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char) c;
		i++;
	}
	return (s);
}
