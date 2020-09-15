/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 10:55:33 by apita-da          #+#    #+#             */
/*   Updated: 2019/11/20 15:13:57 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int		cont;
	size_t	aux;

	if (!src)
		return (0);
	cont = ft_strlen(src);
	if (dstsize == 0 || src == dst)
		return (cont);
	aux = 0;
	while (src[aux] != '\0' && aux < dstsize - 1)
	{
		dst[aux] = src[aux];
		aux++;
	}
	dst[aux] = '\0';
	return (cont);
}
