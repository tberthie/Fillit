/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 12:36:58 by tberthie          #+#    #+#             */
/*   Updated: 2016/11/16 14:07:52 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_check_2(char *map, int shape, int shift, int square)
{
	if (shape == 11 && map[14] == '.' && map[15] == '.' && map[16] == '.'
	&& shift % 16 + 1 < square && shift / 16 + 2 < square)
		return (1);
	if (shape == 12 && map[16] == '.' && map[31] == '.' && map[32] == '.'
	&& shift % 16 + 1 < square && shift / 16 + 3 < square)
		return (1);
	if (shape == 13 && map[16] == '.' && map[17] == '.' && map[18] == '.'
	&& shift % 16 + 3 < square && shift / 16 + 2 < square)
		return (1);
	if (shape == 14 && map[1] == '.' && map[16] == '.' && map[32] == '.'
	&& shift % 16 + 2 < square && shift / 16 + 3 < square)
		return (1);
	if (shape == 15 && map[1] == '.' && map[2] == '.' && map[18] == '.'
	&& shift % 16 + 3 < square && shift / 16 + 2 < square)
		return (1);
	if (shape == 16 && map[1] == '.' && map[15] == '.' && map[16] == '.'
	&& shift % 16 + 2 < square && shift / 16 + 2 < square)
		return (1);
	if (shape == 17 && map[16] == '.' && map[17] == '.' && map[33] == '.'
	&& shift % 16 + 2 < square && shift / 16 + 3 < square)
		return (1);
	if (shape == 18 && map[1] == '.' && map[17] == '.' && map[18] == '.'
	&& shift % 16 + 3 < square && shift / 16 + 2 < square)
		return (1);
	if (shape == 19 && map[15] == '.' && map[16] == '.' && map[31] == '.'
	&& shift % 16 + 1 < square && shift / 16 + 3 < square)
		return (1);
	return (0);
}

int			ft_check(char *map, int shape, int shift, int square)
{
	if (*map != '.')
		return (0);
	if (shape == 1 && map[1] == '.' && map[16] == '.' && map[17] == '.'
	&& shift % 16 + 2 < square && shift / 16 + 2 < square)
		return (1);
	if (shape == 2 && map[16] == '.' && map[32] == '.' && map[48] == '.'
	&& shift % 16 + 1 < square && shift / 16 + 4 < square)
		return (1);
	if (shape == 3 && map[1] == '.' && map[2] == '.' && map[3] == '.'
	&& shift % 16 + 4 < square && shift / 16 + 1 < square)
		return (1);
	if (shape == 4 && map[1] == '.' && map[2] == '.' && map[17] == '.'
	&& shift % 16 + 3 < square && shift / 16 + 2 < square)
		return (1);
	if (shape == 5 && map[15] == '.' && map[16] == '.' && map[32] == '.'
	&& shift % 16 + 1 < square && shift / 16 + 3 < square)
		return (1);
	if (shape == 6 && map[15] == '.' && map[16] == '.' && map[17] == '.'
	&& shift % 16 + 2 < square && shift / 16 + 2 < square)
		return (1);
	if (shape == 7 && map[16] == '.' && map[17] == '.' && map[32] == '.'
	&& shift % 16 + 2 < square && shift / 16 + 3 < square)
		return (1);
	if (shape == 8 && map[16] == '.' && map[32] == '.' && map[33] == '.'
	&& shift % 16 + 2 < square && shift / 16 + 3 < square)
		return (1);
	if (shape == 9 && map[1] == '.' && map[2] == '.' && map[16] == '.'
	&& shift % 16 + 3 < square && shift / 16 + 2 < square)
		return (1);
	if (shape == 10 && map[1] == '.' && map[17] == '.' && map[33] == '.'
	&& shift % 16 + 2 < square && shift / 16 + 3 < square)
		return (1);
	return (ft_check_2(map, shape, shift, square));
}
