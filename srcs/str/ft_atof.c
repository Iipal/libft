/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 17:03:55 by tmaluh            #+#    #+#             */
/*   Updated: 2019/06/10 20:35:42 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static double_t	add_mantissa_delimeter(size_t mantissa_digits)
{
	double_t	out;

	out = 1.0f;
	while (mantissa_digits--)
		out *= 10.0f;
	return (out);
}

double_t		ft_atof(string str)
{
	const int64_t	exp = ft_atol(str);
	int64_t			mantissa;
	size_t			mantissa_digits;
	int8_t			sign;
	size_t			i;

	i = ~0UL;
	mantissa = 0;
	mantissa_digits = 0;
	sign = ('-' == *str) ? -1 : 1;
	('-' == *str) ? ++str : str;
	str += ft_digits(exp);
	if ('.' == *str)
	{
		++str;
		while (str[++i] && ft_isdigit(str[i]))
			++mantissa_digits;
		mantissa = ft_atol(str);
		if (mantissa_digits <= ft_digits(mantissa))
			mantissa_digits = 0;
		else
			mantissa_digits -= ft_digits(mantissa);
	}
	return (exp + (mantissa
		/ add_mantissa_delimeter(ft_digits(mantissa) + mantissa_digits)
		* sign));
}
