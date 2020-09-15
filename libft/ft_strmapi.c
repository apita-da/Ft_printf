/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 18:18:10 by apita-da          #+#    #+#             */
/*   Updated: 2019/11/25 18:34:08 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	cont;

	if (!s || !f)
		return (NULL);
	if (!(str = malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	cont = 0;
	while (s[cont] != '\0')
	{
		str[cont] = f(cont, s[cont]);
		cont++;
	}
	str[cont] = '\0';
	return (str);
}
