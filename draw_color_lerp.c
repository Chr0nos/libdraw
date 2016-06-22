/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_color_lerp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhote <alhote@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/17 17:18:24 by snicolet          #+#    #+#             */
/*   Updated: 2016/06/22 18:59:01 by alhote           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw.h"

unsigned int	draw_color_lerp_max(unsigned int a, unsigned int b, unsigned int max, float pc)
{
	t_v3f	colors;

	if (pc <= 0.0f)
		return (a);
	else if (pc >= 1.0f)
		return (max);
	colors = (t_v3f){
		(float)(a & 0xff0000) * (1.0f - pc) + (float)(b & 0xff0000) * pc,
		(float)(a & 0x00ff00) * (1.0f - pc) + (float)(b & 0x00ff00) * pc,
		(float)(a & 0x0000ff) * (1.0f - pc) + (float)(b & 0x0000ff) * pc};
	return ((((unsigned int)colors.x) & 0xff0000) |
		(((unsigned int)colors.y) & 0x00ff00) |
		(((unsigned int)colors.z) & 0x0000ff));
}

unsigned int	draw_color_lerp(unsigned int a, unsigned int b, float pc)
{
	t_v3f	colors;

	if (pc <= 0.0f)
		return (a);
	else if (pc >= 1.0f)
		return (b);
	colors = (t_v3f){
		(float)(a & 0xff0000) * (1.0f - pc) + (float)(b & 0xff0000) * pc,
		(float)(a & 0x00ff00) * (1.0f - pc) + (float)(b & 0x00ff00) * pc,
		(float)(a & 0x0000ff) * (1.0f - pc) + (float)(b & 0x0000ff) * pc};
	return ((((unsigned int)colors.x) & 0xff0000) |
		(((unsigned int)colors.y) & 0x00ff00) |
		(((unsigned int)colors.z) & 0x0000ff));
}
