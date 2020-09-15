/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 15:03:17 by apita-da          #+#    #+#             */
/*   Updated: 2019/11/30 18:39:42 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	cont;
	size_t	aux;

	if (!*needle || needle == NULL)
		return ((char *)haystack);
	cont = 0;
	while (haystack[cont] != '\0' && cont < len)
	{
		aux = 0;
		while (needle[aux] == haystack[cont + aux] && cont + aux < len)
		{
			if (needle[aux + 1] == '\0')
				return ((char *)haystack + cont);
			aux++;
		}
		cont++;
	}
	return (NULL);
}
