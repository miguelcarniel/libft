/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 15:52:20 by mcarniel          #+#    #+#             */
/*   Updated: 2022/04/26 17:13:10 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* isascii() checks whether c is a 7-bit unsigned char value that fits
into the ASCII character set. */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
