/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_vector_inv.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhote <alhote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/31 19:09:03 by alhote            #+#    #+#             */
/*   Updated: 2016/05/31 19:09:34 by alhote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw.h"

t_vector	draw_vector_inv(t_vector a)
{
	return ((t_vector){-a.x, -a.y, -a.z});
}