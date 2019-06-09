/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_vaddv.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 14:08:42 by tmaluh            #+#    #+#             */
/*   Updated: 2019/06/09 05:01:31 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_vectors.h"

inline t_v4df	u_vaddv(const t_v4df a, const t_v4df b)
{
	const t_v4df	c = {X(a) + X(b), Y(a) + Y(b), Z(a) + Z(b), 0.0};

	return (c);
}
