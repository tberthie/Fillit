/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shape_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 13:38:13 by tberthie          #+#    #+#             */
/*   Updated: 2016/11/09 13:57:38 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_is_j(char *str)
{
	if (*str == *(str + 5) && *str == *(str + 9) && *str == *(str + 10))
		return (12);
	if (*str == *(str + 5) && *str == *(str + 6) && *str == *(str + 7))
		return (13);
	if (*str == *(str + 1) && *str == *(str + 5) && *str == *(str + 10))
		return (14);
	return (*str == *(str + 1) && *str == *(str + 2) &&
		*str == *(str + 7) ? 4 : 0);
}

int			ft_is_s(char *str)
{
	if (*str == *(str + 1) && *str == *(str + 4) && *str == *(str + 5))
		return (15);
	return(*str == *(str + 5) && *str == *(str + 6) &&
		*str == *(str + 11) ? 16 : 0);
}

int			ft_is_z(char *str)
{
	if (*str == *(str + 1) && *str == *(str + 6) && *str == *(str + 7))
		return (17);
	return (*str == *(str + 4) && *str == *(str + 5) &&
		*str == *(str + 9) ? 18 : 0);
}
