/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:41:57 by apita-da          #+#    #+#             */
/*   Updated: 2019/11/19 16:22:05 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	cont;

	cont = ft_strlen(str);
	while (str[cont] != c)
	{
		if (cont == 0 && str[cont] != c)
			return (NULL);
		cont--;
	}
	return ((char *)&str[cont]);
}
