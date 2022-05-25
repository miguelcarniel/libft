/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:36:13 by mcarniel          #+#    #+#             */
/*   Updated: 2022/04/27 02:09:42 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//This function convert lowercase letters to uppercase

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
