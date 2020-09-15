/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 19:36:43 by apita-da          #+#    #+#             */
/*   Updated: 2019/11/18 20:18:45 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	cont;
	char	*str;

	cont = 0;
	str = (void *)s;
	while (cont < n)
	{
		if (str[cont] == (char)c)
			return (&str[cont]);
		cont++;
	}
	return (NULL);
}
