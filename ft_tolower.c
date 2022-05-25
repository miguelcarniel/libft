/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:38:48 by mcarniel          #+#    #+#             */
/*   Updated: 2022/04/27 02:15:09 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  This function convert uppercase letters to lowercase

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
