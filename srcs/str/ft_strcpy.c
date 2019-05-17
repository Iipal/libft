/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 10:03:08 by tmaluh            #+#    #+#             */
/*   Updated: 2019/05/17 13:12:04 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

string	ft_strcpy(string dest, const string str)
{
	size_t	i;

	i = ~0L;
	while (str[++i])
		dest[i] = str[i];
	dest[i] = '\0';
	return (dest);
}