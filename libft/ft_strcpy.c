/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 20:37:16 by apita-da          #+#    #+#             */
/*   Updated: 2019/11/25 15:58:53 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int	cont;

	cont = 0;
	while (src[cont] != '\0')
	{
		dst[cont] = src[cont];
		cont++;
	}
	dst[cont] = '\0';
	return (dst);
}
