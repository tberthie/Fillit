/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   link.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:21:51 by tberthie          #+#    #+#             */
/*   Updated: 2016/11/16 11:44:43 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINK_H
# define LINK_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct	s_bloc
{
	int			shape;
	int			pos;
	int			id;
}				t_bloc;

typedef struct	s_list
{
	int			count;
	int			square;
	t_bloc		**blocs;
	char		map[240];
	char		small[240];
}				t_list;

void			ft_parse(int fd);
void			ft_error(void);
void			ft_putstr(char *str);
void			ft_solve(t_list *list, int pos);
int				ft_is_love(char *str, int ls, char c);
void			ft_setup(char *map);
void			ft_remove(char *map, int shape, int shift, int id);
int				ft_print();

#endif
