/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_vector_len.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snicolet <snicolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/18 13:00:25 by snicolet          #+#    #+#             */
/*   Updated: 2016/06/18 13:01:54 by snicolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw.h"

double	draw_v4d_len(t_v4d v)
{
	return (sqrt(v.x * v.x + v.y * v.y + v.z * v.z));
}