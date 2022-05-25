/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:14:46 by mcarniel          #+#    #+#             */
/*   Updated: 2022/05/01 20:04:53 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The calloc() function allocates memory for an array of nmemb 
elements of size bytes each and returns a pointer to the  allocated 
memory. The  memory is set to zero. 
 
RETURN VALUE The calloc() function return a pointer to the allocated memory,
which is suitably aligned for any built-in type.  
On error, these functions return NULL. */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	total = nmemb * size;
	if (total / size != nmemb)
		return (NULL);
	ptr = (void *) malloc (total);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}
