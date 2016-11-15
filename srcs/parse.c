/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 19:18:15 by tberthie          #+#    #+#             */
/*   Updated: 2016/11/15 19:12:09 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "link.h"

int		ft_get_shape(char *str)
{
	int		shape;

	while (*str == '.' || *str == '\n')
		str++;
	if ((shape = (ft_is_love(str))))
		return (shape);
	return (0);
}

int		ft_lst_add(t_list *list, t_bloc *bloc, int id)
{
	t_bloc	**sub;

	if (!(sub = malloc(sizeof(t_bloc) * (id + 1))))
		return (0);
	sub[id] = bloc;
	while (id--)
		sub[id] = list->blocs[id];
	list->blocs = sub;
	return (1);
}

int		ft_add_block(char *str, t_list *list, int id)
{
	t_bloc	*new;
	int		shape;

	if (!(new = malloc(sizeof(t_bloc*))))
		return (0);
	if (!(shape = ft_get_shape(str)))
		return (0);
	new->shape = shape;
	new->pos = 0;
	new->id = id;
	if (!ft_lst_add(list, new, id))
		return (0);
	return (1);
}

int		ft_get_block(char *str, t_list *list, int id)
{
	int		count;
	int		pos;
	int		line;
	int		i;

	pos = 0;
	line = 0;
	count = 0;
	i = 0;
	while (line < 4)
	{
		pos = line * 5;
		i = 0;
		while (i < 4)
		{
			if (str[i + pos] != '.' && str[i + pos] != '#')
				return (0);
			count = (str[i++ + pos] == '#' ? count + 1 : count);
		}
		if (str[4 + pos] != '\n')
			return (0);
		line++;
	}
	if (count != 4 || !ft_add_block(str, list, id))
		return (0);
	list->count = id + 1;
	list->square = 235;
	return (1);
}

void	ft_parse(int fd)
{
	char	buff[21];
	int		rd;
	t_list	*list;
	int		id;

	id = 0;
	if (!(list = malloc(sizeof(t_list))))
	{
		ft_putstr("error\n");
		return ;
	}
	while ((rd = read(fd, buff, 21)) >= 20)
	{
		if (!ft_get_block(buff, list, id++) ||
			(rd == 21 && buff[20] != '\n'))
		{
			ft_putstr("error\n");
			return ;
		}
		else if (rd == 20)
		{
			ft_solve(list);
			return ;
		}
	}
	ft_putstr("error\n");
}
