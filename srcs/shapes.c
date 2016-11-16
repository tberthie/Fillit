/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shapes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 21:09:55 by tberthie          #+#    #+#             */
/*   Updated: 2016/11/16 21:10:13 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_is_life(char *str, int l)
{
	if (*str == *(str + l - 2) && *str == *(str + l - 1) && *str == *(str + l))
		return (11);
	if (*str == *(str + l) && *str == *(str + 2 * l - 1) && *str ==
	*(str + 2 * l))
		return (12);
	if (*str == *(str + l) && *str == *(str + l + 1) && *str == *(str + l + 2))
		return (13);
	if (*str == *(str + 1) && *str == *(str + l) && *str == *(str + 2 * l))
		return (14);
	if (*str == *(str + 1) && *str == *(str + 2) && *str == *(str + l + 2))
		return (15);
	if (*str == *(str + 1) && *str == *(str + l - 1) && *str == *(str + l))
		return (16);
	if (*str == *(str + l) && *str == *(str + l + 1) && *str ==
	*(str + 2 * l + 1))
		return (17);
	if (*str == *(str + 1) && *str == *(str + l + 1) && *str == *(str + l + 2))
		return (18);
	return (*str == *(str + l - 1) && *str == *(str + l) &&
		*str == *(str + 2 * l - 1) ? 19 : 0);
}

int			ft_is_love(char *str, int l, char c)
{
	if (*str != c)
		return (0);
	if (*str == *(str + 1) && *str == *(str + l) && *str == *(str + l + 1))
		return (1);
	if (*str == *(str + l) && *str == *(str + 2 * l) && *str == *(str + 3 * l))
		return (2);
	if (*str == *(str + 1) && *str == *(str + 2) && *str == *(str + 3))
		return (3);
	if (*str == *(str + 1) && *str == *(str + 2) && *str == *(str + l + 1))
		return (4);
	if (*str == *(str + l - 1) && *str == *(str + l) && *str == *(str + 2 * l))
		return (5);
	if (*str == *(str + l - 1) && *str == *(str + l) && *str == *(str + l + 1))
		return (6);
	if (*str == *(str + l) && *str == *(str + l + 1) && *str == *(str + 2 * l))
		return (7);
	if (*str == *(str + l) && *str == *(str + 2 * l) && *str ==
	*(str + 2 * l + 1))
		return (8);
	if (*str == *(str + 1) && *str == *(str + 2) && *str == *(str + l))
		return (9);
	return (*str == *(str + 1) && *str == *(str + l + 1) &&
		*str == *(str + 2 * l + 1) ? 10 : ft_is_life(str, l));
}
