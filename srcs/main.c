/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:22:19 by tberthie          #+#    #+#             */
/*   Updated: 2017/04/30 16:13:18 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "link.h"

int		main(int ac, char **av)
{
	int		fd;

	if (ac != 2)
		ft_putstr("usage: fillit file\n");
	else if ((fd = open(av[1], O_RDONLY)) == -1)
		ft_putstr("error\n");
	else
	{
		ft_parse(fd);
		close(fd);
	}
	return (0);
}
