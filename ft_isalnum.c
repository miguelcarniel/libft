/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarniel <mcarniel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 15:52:27 by mcarniel          #+#    #+#             */
/*   Updated: 2022/04/26 17:12:46 by mcarniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* isalnum() checks for an alphanumeric character; it is equivalent
to (isalpha(c) || isdigit(c)). */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
