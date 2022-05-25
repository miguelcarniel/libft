/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:24:51 by mcarniel          #+#    #+#             */
/*   Updated: 2022/04/27 05:00:14 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// isdigit() checks for a digit (0 through 9).

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
