/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 21:25:22 by mcarniel          #+#    #+#             */
/*   Updated: 2022/04/29 01:23:38 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strnstr() function locates the first occurrence of the null-terminated 
string little in the string big, where not more than len characters are searched.

RETURN VALUES If little is an empty string, big is returned; if little occurs 
nowhere in big, NULL is returned; otherwise a pointer to the first character 
of the first occurrence of little is returned.*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	find_size;

	i = 0;
	find_size = ft_strlen(little);
	if (find_size == 0)
		return ((char *) big);
	if (!len)
		return (0);
	while (big[i] && i + find_size <= len)
	{
		if (!ft_strncmp(&big[i], little, find_size))
			return ((char *) &big[i]);
		i++;
	}
	return (0);
}
