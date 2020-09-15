/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:31:52 by apita-da          #+#    #+#             */
/*   Updated: 2019/11/25 17:30:30 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int			cont;
	size_t		aux;

	cont = ft_strlen(src) + ft_strlen(dst);
	if (dstsize <= ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	aux = 0;
	while (dst[aux] != '\0')
		aux++;
	while (*src && aux < (dstsize - 1))
	{
		dst[aux] = *src++;
		aux++;
	}
	dst[aux] = '\0';
	return (cont);
}
