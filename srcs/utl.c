/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 21:10:03 by tberthie          #+#    #+#             */
/*   Updated: 2016/11/16 21:10:08 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "link.h"

void		ft_setup(char *map)
{
	int		line;
	int		i;

	line = 0;
	while (line < 15)
	{
		i = 15;
		map[(line * 16) + i] = '\n';
		while (i--)
			map[(line * 16) + i] = '.';
		line++;
	}
	map[240] = '\0';
}

void		ft_result(t_list *list)
{
	int i;
	int j;

	i = 0;
	while (i < list->square)
	{
		j = 0;
		while (j < list->square)
			ft_putchar(list->small[16 * i + j++]);
		ft_putchar('\n');
		i++;
	}
}

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}
