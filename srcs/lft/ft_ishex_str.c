/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ishex_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 12:23:15 by tmaluh            #+#    #+#             */
/*   Updated: 2019/11/05 09:53:20 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_ishex_str(const char *restrict s)
{
	size_t		i;
	const char	*str = (const char*)s;
	const char	valid_hex[] = "0123456789abcdef";

	str = (char*)s;
	while (str && *str)
	{
		i = ~0UL;
		while (valid_hex[++i])
			if (F_TOLOWER(*str) == valid_hex[i])
				break ;
		if (F_TOLOWER(*str) != valid_hex[i])
			return (false);
		++str;
	}
	return (true);
}
