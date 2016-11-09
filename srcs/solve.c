/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 13:10:34 by tberthie          #+#    #+#             */
/*   Updated: 2016/11/09 15:30:05 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "link.h"

//
#include <stdio.h>
//

void		ft_solve(t_list *list)
{
	//map 106x106 (4*26)
	printf("Valid - %d blocs\n", list->count);
	while ((list->count)--)
	{
		printf("Bloc %d\n", (*(list->blocs))->shape);
		(list->blocs)++;
	}
}
