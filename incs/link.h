/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   link.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:21:51 by tberthie          #+#    #+#             */
/*   Updated: 2017/04/30 16:12:23 by tberthie         ###   ########.fr       */
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
	int			id;
}				t_bloc;

typedef struct	s_list
{
	int			count;
	int			square;
	t_bloc		**blocs;
	char		map[241];
	char		small[241];
}				t_list;

void			ft_parse(int fd);
void			ft_error(void);
void			ft_putstr(char *str);
void			ft_solve(t_list *list, int pos);
int				ft_is_love(char *str, int ls, char c);
void			ft_setup(char *map);
void			ft_remove(char *map, int shape, int shift, int id);
int				ft_check(char *map, int shape, int shift, int square);
void			ft_print(char *map, int shape, int id);
void			ft_result(t_list *list);
void			ft_putchar(char c);

#endif
