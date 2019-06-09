/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_vsubd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 14:04:08 by tmaluh            #+#    #+#             */
/*   Updated: 2019/06/09 05:01:31 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_vectors.h"

inline t_v4df	u_vsubd(const t_v4df v, const double_t d)
{
	const t_v4df	out = {X(v) - d, Y(v) - d, Z(v) - d, 0.0};

	return (out);
}
