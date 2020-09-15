/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 20:51:44 by apita-da          #+#    #+#             */
/*   Updated: 2019/11/26 18:03:21 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	cont;
	unsigned int	aux;
	unsigned int	strlen;

	if (!s)
		return (NULL);
	strlen = ft_strlen(s);
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	aux = start;
	cont = 0;
	if (start < strlen)
	{
		while (aux < start + len && s[aux] != '\0')
		{
			str[cont] = s[aux];
			cont++;
			aux++;
		}
	}
	str[cont] = '\0';
	return (str);
}
