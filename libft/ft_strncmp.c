/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 13:07:10 by apita-da          #+#    #+#             */
/*   Updated: 2019/11/19 15:02:53 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	cont;

	cont = 0;
	if (n == 0)
		return (0);
	while (s1[cont] != '\0' && s2[cont] != '\0'
			&& s1[cont] == s2[cont] && (cont < n - 1))
	{
		cont++;
	}
	return ((unsigned char)s1[cont] - s2[cont]);
}
