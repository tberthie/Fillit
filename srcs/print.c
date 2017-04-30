/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 12:44:58 by tberthie          #+#    #+#             */
/*   Updated: 2017/04/30 16:12:53 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	ft_print_2(char *map, int shape, int id)
{
	if (shape == 1 || shape == 4 || shape == 6 || shape == 7 || shape == 10 ||
	shape == 13 || shape == 17 || shape == 18)
		map[17] = 'A' + id;
	if (shape == 13 || shape == 15 || shape == 18)
		map[18] = 'A' + id;
	if (shape == 12 || shape == 19)
		map[31] = 'A' + id;
	if (shape == 2 || shape == 5 || shape == 7 || shape == 8 || shape == 12 ||
	shape == 14)
		map[32] = 'A' + id;
	if (shape == 8 || shape == 10 || shape == 17)
		map[33] = 'A' + id;
	if (shape == 2)
		map[48] = 'A' + id;
}

void		ft_print(char *map, int shape, int id)
{
	*map = 'A' + id;
	if (shape == 1 || shape == 3 || shape == 4 || shape == 9 || shape == 10 ||
	shape == 14 || shape == 15 || shape == 16 || shape == 18)
		map[1] = 'A' + id;
	if (shape == 3 || shape == 4 || shape == 9 || shape == 15)
		map[2] = 'A' + id;
	if (shape == 3)
		map[3] = 'A' + id;
	if (shape == 11)
		map[14] = 'A' + id;
	if (shape == 5 || shape == 6 || shape == 11 || shape == 16 ||
	shape == 19)
		map[15] = 'A' + id;
	if (shape == 1 || shape == 2 || shape == 5 || shape == 6 || shape == 7 ||
	shape == 8 || shape == 9 || shape == 11 || shape == 12 || shape == 13 ||
	shape == 14 || shape == 16 || shape == 17 || shape == 19)
		map[16] = 'A' + id;
	ft_print_2(map, shape, id);
}
