/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   link.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:21:51 by tberthie          #+#    #+#             */
/*   Updated: 2016/11/09 15:28:29 by tberthie         ###   ########.fr       */
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
}				t_list;

void			ft_parse(int fd);
void			ft_error(void);
void			ft_putstr(char *str);
void			ft_solve(t_list *list);
int				*ft_get_specs(char *str);

int				ft_is_o(char *str);
int				ft_is_i(char *str);
int				ft_is_l(char *str);
int				ft_is_j(char *str);
int				ft_is_s(char *str);
int				ft_is_z(char *str);
int				ft_is_t(char *str);

#endif
