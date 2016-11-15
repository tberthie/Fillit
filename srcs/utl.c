/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:57:56 by tberthie          #+#    #+#             */
/*   Updated: 2016/11/10 15:59:29 by tberthie         ###   ########.fr       */
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

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}
