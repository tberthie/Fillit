/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shape_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 13:38:07 by tberthie          #+#    #+#             */
/*   Updated: 2016/11/10 12:21:28 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "link.h"

static int	ft_is_life(char *str)
{
	if (*str == *(str + 3) && *str == *(str + 4) && *str == *(str + 5))
		return (11);
	if (*str == *(str + 5) && *str == *(str + 9) && *str == *(str + 10))
		return (12);
	if (*str == *(str + 5) && *str == *(str + 6) && *str == *(str + 7))
		return (13);
	if (*str == *(str + 1) && *str == *(str + 5) && *str == *(str + 10))
		return (14);
	if (*str == *(str + 1) && *str == *(str + 2) && *str == *(str + 7))
		return (15);
	if (*str == *(str + 1) && *str == *(str + 4) && *str == *(str + 5))
		return (16);
	if (*str == *(str + 5) && *str == *(str + 6) && *str == *(str + 11))
		return (17);
	if (*str == *(str + 1) && *str == *(str + 6) && *str == *(str + 7))
		return (18);
	return (*str == *(str + 4) && *str == *(str + 5) &&
		*str == *(str + 9) ? 19 : 0);
}

int			ft_is_love(char *str)
{
	if (*str == *(str + 1) && *str == *(str + 5) && *str == *(str + 6))
		return (1);
	if (*str == *(str + 5) && *str == *(str + 10) && *str == *(str + 15))
		return (2);
	if (*str == *(str + 1) && *str == *(str + 2) && *str == *(str + 3))
		return (3);
	if (*str == *(str + 1) && *str == *(str + 2) && *str == *(str + 6))
		return (4);
	if (*str == *(str + 4) && *str == *(str + 5) && *str == *(str + 10))
		return (5);
	if (*str == *(str + 4) && *str == *(str + 5) && *str == *(str + 6))
		return (6);
	if (*str == *(str + 5) && *str == *(str + 6) && *str == *(str + 10))
		return (7);
	if (*str == *(str + 5) && *str == *(str + 10) && *str == *(str + 11))
		return (8);
	if (*str == *(str + 1) && *str == *(str + 2) && *str == *(str + 5))
		return (9);
	return (*str == *(str + 1) && *str == *(str + 6) &&
		*str == *(str + 11) ? 10 : ft_is_life(str));
}
