/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 16:33:44 by apita-da          #+#    #+#             */
/*   Updated: 2019/11/18 19:36:14 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*sorc;

	dest = dst;
	sorc = src;
	if (dest > sorc)
	{
		while (len)
		{
			len--;
			dest[len] = sorc[len];
		}
		return (dest);
	}
	else
	{
		return (ft_memcpy(dst, src, len));
	}
	return (dst);
}
