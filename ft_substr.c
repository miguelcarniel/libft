/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:44:53 by mcarniel          #+#    #+#             */
/*   Updated: 2022/04/25 15:58:01 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns a sub from the string ’s’.
The sub begins at index ’start’ and is of maximum size ’len’.

RETURN VALUE The sub. NULL if the allocation fails.*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	slenght;
	size_t	i;

	slenght = ft_strlen(s);
	if (start >= slenght)
		return (ft_strdup(""));
	if (slenght - start < len)
		len = slenght - start;
	sub = malloc((len + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (s[i + start] && (i < len))
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[len] = '\0';
	return (sub);
}
