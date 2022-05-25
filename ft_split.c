/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 21:09:09 by mcarniel          #+#    #+#             */
/*   Updated: 2022/05/03 15:29:08 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns an array of strings obtained 
by splitting ’s’ using the character ’c’ as a delimiter. The array must
end with a NULL pointer.

RETURN VALUE The array of new strings resulting from the split. NULL if the
allocation fails.*/

#include "libft.h"

static int	count_words(const char *s, char delimiter)
{
	size_t	num_seq;

	num_seq = 0;
	if (*s == '\0')
		return (num_seq);
	if (delimiter == '\0')
		return (1);
	while (*s == delimiter && *s)
		s++;
	while (*s)
	{
		num_seq++;
		while (*s != delimiter && *s)
			s++;
		while (*s == delimiter && *s)
			s++;
	}
	return (num_seq);
}

static void	*ft_free(char **words)
{
	while (*words)
		free(*words);
	free(words);
	return (NULL);
}

static char	**write_words(char **words, const char *s, char delimiter)
{
	size_t	length;
	size_t	i;

	i = 0;
	while (*s)
	{
		length = 0;
		while (s[length] != delimiter && s[length])
			length++;
		words[i] = (char *) malloc(length * sizeof(char) + 1);
		if (words[i] == NULL)
			return (ft_free(words));
		words[i][length] = '\0';
		while (length > 0)
		{
			words[i][length - 1] = s[length - 1];
			length--;
		}
		while (*s != delimiter && *s)
			s++;
		while (*s == delimiter && *s)
			s++;
		i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	num_seq;

	num_seq = count_words(s, c);
	words = (char **) malloc((num_seq + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	while (*s == c && *s)
		s++;
	words = write_words(words, s, c);
	words[num_seq] = NULL;
	return (words);
}
