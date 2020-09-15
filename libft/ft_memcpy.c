/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 16:59:06 by apita-da          #+#    #+#             */
/*   Updated: 2019/11/18 14:07:54 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t nb)
{
	size_t		cont;
	char		*dest;
	const char	*sorc;

	if (nb == 0 || dst == src)
		return (dst);
	cont = 0;
	dest = dst;
	sorc = src;
	while (cont < nb)
	{
		dest[cont] = sorc[cont];
		cont++;
	}
	return (dst);
}
