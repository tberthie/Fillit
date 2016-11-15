/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 13:10:34 by tberthie          #+#    #+#             */
/*   Updated: 2016/11/15 20:01:46 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "link.h"

static int		ft_shift(int shift, t_list *list, int pos)
{
	while (map[shift] && !(ft_check()))
		shift++;
	return (map[shift] && ft_print() ? shift : 0);
}

static int		ft_get_square(char *map)
{
	int shift;
	int square;

	shift = 0;
	square = 0;
	while (map[shift++])
		if (map[shift - 1] != '.' && map[shift - 1] != '\n')
		{
			square = shift % 16 + 1 < square ? shift % 16 + 1 : square;
			square = shift / 16 + 1 < square ? shift / 16 + 1 : square;
		}
	return (square);
}

static void		ft_save(t_list *list)
{
	int	i;

	i = 0;
	ft_setup(list->small);
	while (list->map[i++])
		list->small[i - 1] = list->map[i - 1];
	list->square = ft_get_square(list->small);
}

void			ft_solve(t_list *list, int pos)
{
	int shift;

	while ((shift = ft_shift()))
	{
		if (pos + 1 != list->count)
			ft_solve(list, pos++);
		else
		{
			ft_save(list);
			ft_remove(list->map, list->blocs[pos]->shape, shift,
			list->blocs[pos]->id);
		}
		shift++;
	}
}
