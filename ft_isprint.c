/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 15:56:09 by mcarniel          #+#    #+#             */
/*   Updated: 2022/04/26 17:20:48 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// isprint() checks for any printable character including space.

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
