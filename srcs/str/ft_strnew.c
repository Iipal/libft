/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 17:06:41 by tmaluh            #+#    #+#             */
/*   Updated: 2019/05/17 13:18:44 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

inline string	ft_strnew(const size_t size)
{
	string	out;

	out = NULL;
	NO_R(out = (string)ft_memalloc(sizeof(char) * (size + 1)), out);
	ft_memset(out, '\0', size + 1);
	return (out);
}