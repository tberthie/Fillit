/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shape_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 13:38:07 by tberthie          #+#    #+#             */
/*   Updated: 2016/11/09 13:57:11 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "link.h"

int			ft_is_t(char *str)
{
	if (*str == *(str + 1) && *str == *(str + 2) && *str == *(str + 6))
		return (4);
	if (*str == *(str + 4) && *str == *(str + 5) && *str == *(str + 10))
		return (5);
	if (*str == *(str + 4) && *str == *(str + 5 )&& *str == *(str + 6))
		return (6);
	return (*str == *(str + 5) && *str == *(str + 6) &&
		*str == *(str + 10) ? 7 : 0);
}

int			ft_is_i(char *str)
{
	if (*str == *(str + 5) && *str == *(str + 10) && *str == *(str + 15))
		return (2);
	return (*str == *(str + 1) && *str == *(str + 2) &&
		*str == *(str + 3) ? 3 : 0);
}

int			ft_is_o(char *str)
{
	return (*str == *(str + 1) && *str == *(str + 5) &&
		*str == *(str + 6) ? 1 : 0);
}

int			ft_is_l(char *str)
{
	if (*str == *(str + 5) && *str == *(str + 10) && *str == *(str + 11))
		return (8);
	if (*str == *(str + 1) && *str == *(str + 2) && *str == *(str + 5))
		return (9);
	if (*str == *(str + 1) && *str == *(str + 6) && *str == *(str + 11))
		return (10);
	return (*str == *(str + 3) && *str == *(str + 4) &&
		*str == *(str + 5) ? 11 : 0);
}
