/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 11:40:28 by apita-da          #+#    #+#             */
/*   Updated: 2019/11/19 12:44:04 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned int	cont;

	cont = 0;
	while (str[cont] != c)
	{
		if (str[cont] == '\0')
			return (NULL);
		cont++;
	}
	return ((char *)&str[cont]);
}
