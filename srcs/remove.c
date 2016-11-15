/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 17:24:36 by tberthie          #+#    #+#             */
/*   Updated: 2016/11/15 19:19:31 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	ft_remove_2(char *map, int shape, int shift, int id)
{
	if ((shape == 1 || shape == 4 || shape == 6 || shape == 7 || shape == 10 ||
	shape == 13 || shape == 17 || shape == 18) && map[shift + 17] == 'A' + id)
		map[shift + 17] = '.';
	if ((shape == 13 || shape == 15 || shape == 18) &&
	map[shift + 18] == 'A' + id)
		map[shift + 18] = '.';
	if ((shape == 12 || shape == 19) && map[shift + 31] == 'A' + id)
		map[shift + 31] = '.';
	if ((shape == 2 || shape == 5 || shape == 7 || shape == 8 || shape == 12 ||
	shape == 14) && map[shift + 32] == 'A' + id)
		map[shift + 32] = '.';
	if ((shape == 8 || shape == 10 || shape == 17) &&
	map[shift + 33] == 'A' + id)
		map[shift + 33] = '.';
	if (shape == 2 && map[shift + 48] == 'A' + id)
		map[shift + 48] = '.';
}

void		ft_remove(char *map, int shape, int shift, int id)
{
	map[shift] = '.';
	if ((shape == 1 || shape == 3 || shape == 4 || shape == 9 || shape == 10 ||
	shape == 14 || shape == 15 || shape == 16 || shape == 18) &&
	map[shift + 1] == 'A' + id)
		map[shift + 1] = '.';
	if ((shape == 3 || shape == 4 || shape == 9 || shape == 15) &&
	map[shift + 2] == 'A' + id)
		map[shift + 2] = '.';
	if (shape == 3 && map[shift + 3] == 'A' + id)
		map[shift + 3] = '.';
	if (shape == 11 && map[shift + 14] == 'A' + id)
		map[shift + 14] = '.';
	if ((shape == 5 || shape == 6 || shape == 11 || shape == 16 ||
	shape == 19) && map[shift + 15] == 'A' + id)
		map[shift + 15] = '.';
	if ((shape == 1 || shape == 2 || shape == 5 || shape == 6 || shape == 7 ||
	shape == 8 || shape == 9 || shape == 11 || shape == 12 || shape == 13 ||
	shape == 14 || shape == 16 || shape == 17 || shape == 19) &&
	map[shift + 16] == 'A' + id)
		map[shift + 16] = '.';
	ft_remove_2(map, shape, shift, id);
}
