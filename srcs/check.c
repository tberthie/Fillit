/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 12:36:22 by tberthie          #+#    #+#             */
/*   Updated: 2016/11/16 12:36:25 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_check(char *map, int shift, int square, int shape)
{
	if (shape == 1 && shift < square && shift / 16 < square &&
	map[1] == '.' && map[16] == '.' && map[17] == '.')
		return (1);
	if (shape == 2 && shift < square && shift / 16 < square &&
	map[16] == '.' && map[32] == '.' && map[48] == '.')
		return (1);
	if (shape == 2 && shift < square && shift / 16 < square &&
	map[16] == '.' && map[32] == '.' && map[48] == '.')
		return (1);
	if (shape == 2 && shift < square && shift / 16 < square &&
	map[16] == '.' && map[32] == '.' && map[48] == '.')
		return (1);
	if (shape == 2 && shift < square && shift / 16 < square &&
	map[16] == '.' && map[32] == '.' && map[48] == '.')
		return (1);
	if (shape == 2 && shift < square && shift / 16 < square &&
	map[16] == '.' && map[32] == '.' && map[48] == '.')
		return (1);
	if (shape == 2 && shift < square && shift / 16 < square &&
	map[16] == '.' && map[32] == '.' && map[48] == '.')
		return (1);
	if (shape == 2 && shift < square && shift / 16 < square &&
	map[16] == '.' && map[32] == '.' && map[48] == '.')
		return (1);
	if (shape == 2 && shift < square && shift / 16 < square &&
	map[16] == '.' && map[32] == '.' && map[48] == '.')
		return (1);
	if (shape == 2 && shift < square && shift / 16 < square &&
	map[16] == '.' && map[32] == '.' && map[48] == '.')
		return (1);
	if (shape == 2 && shift < square && shift / 16 < square &&
	map[16] == '.' && map[32] == '.' && map[48] == '.')
		return (1);
	if (shape == 2 && shift < square && shift / 16 < square &&
	map[16] == '.' && map[32] == '.' && map[48] == '.')
		return (1);
	return (0);
}
