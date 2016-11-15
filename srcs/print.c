/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 17:26:14 by tberthie          #+#    #+#             */
/*   Updated: 2016/11/15 18:55:43 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_print(char *map, int shift, int shape, int id, int square)
{
	if (shape == 1 && shift < square && shift / 16 < square &&
	map[shift + 1] == '.')
	{
		map[shift + 1] = 'A' + id;
	}
	return (0);
}
