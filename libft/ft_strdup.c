/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 17:04:07 by apita-da          #+#    #+#             */
/*   Updated: 2019/11/21 19:02:25 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		cont;
	int		len;

	len = ft_strlen(s1);
	if (!(s2 = malloc(sizeof(char) * len + 1)))
		return (NULL);
	cont = 0;
	while (s1[cont] != '\0')
	{
		s2[cont] = s1[cont];
		cont++;
	}
	s2[cont] = '\0';
	return (s2);
}
