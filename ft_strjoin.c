/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 16:33:00 by mcarniel          #+#    #+#             */
/*   Updated: 2022/04/28 19:59:58 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates and returns a new string, which is the result of the 
concatenation of ’s1’ and ’s2’. */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nstr;
	int		i;
	int		len1;
	int		len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	nstr = malloc((len1 + len2 + 1) * sizeof(char));
	if (nstr == NULL)
		return (NULL);
	i = -1;
	while (s1[++i])
		nstr[i] = s1[i];
	i = -1;
	while (s2[++i])
		nstr[i + len1] = s2[i];
	nstr[len1 + len2] = '\0';
	return (nstr);
}
