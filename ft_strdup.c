/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:08:24 by mcarniel          #+#    #+#             */
/*   Updated: 2022/04/27 02:06:39 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The  strdup()  function returns a pointer to a new string which is a
duplicate of the string s. */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*nstr;

	i = 0;
	nstr = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (nstr == NULL)
		return (NULL);
	while (s[i])
	{
		nstr[i] = s[i];
		i++;
	}
	nstr[i] = '\0';
	return (nstr);
}
