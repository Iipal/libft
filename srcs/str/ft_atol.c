/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 11:11:40 by tmaluh            #+#    #+#             */
/*   Updated: 2019/12/23 21:02:32 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int64_t	ft_atol(const char *str)
{
	int64_t	num;
	int64_t	sign;

	num = 0L;
	str += ft_strnblank(str);
	sign = ('-' == *str) ? -1L : 1L;
	if ('-' == *str || '+' == *str)
		++str;
	while (F_ISDIGIT(*str))
		num = num * 0xAL + *(str++) - 0x30L;
	return (num * sign);
}
