/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_matrix_topxtab.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qloubier <qloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 14:58:28 by snicolet          #+#    #+#             */
/*   Updated: 2016/06/23 22:06:11 by qloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw.h"
#include <string.h>
#include <math.h>

t_point		*draw_matrix_topxtab(t_point *tab, size_t size, t_matrix *t)
{
	size_t		p;
	t_vector	v;

	p = 0;
	while (p < size)
	{
		v = geo_mkv((float)tab[p].x, (float)tab[p].y, 0.0f);
		v = geo_apply(v, t);
		tab[p].x = (int)lroundf(v.x);
		tab[p].y = (int)lroundf(v.y);
		p++;
	}
	return (tab);
}
