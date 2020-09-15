/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 12:57:48 by apita-da          #+#    #+#             */
/*   Updated: 2019/11/25 18:00:37 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		cont;

	if (!s1 || !s2)
		return (NULL);
	if (!(s3 = (char *)malloc(sizeof(char *) *
		(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1))))
		return (NULL);
	s3 = ft_strcpy((char *)s3, (char *)s1);
	cont = 0;
	while (s3[cont] != '\0')
		cont++;
	while (*s2)
	{
		s3[cont] = (char)*s2++;
		cont++;
	}
	s3[cont] = '\0';
	return ((char *)s3);
}
