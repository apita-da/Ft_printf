/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 13:57:34 by apita-da          #+#    #+#             */
/*   Updated: 2019/11/18 17:21:57 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t nb)
{
	size_t				cont;
	unsigned char		*dest;
	unsigned const char	*sorc;

	dest = dst;
	sorc = src;
	cont = 0;
	while (cont < nb)
	{
		dest[cont] = sorc[cont];
		if (dest[cont] == (unsigned char)c)
			return ((void*)(dest + cont + 1));
		cont++;
	}
	return (NULL);
}
