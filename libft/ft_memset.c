/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 14:17:32 by apita-da          #+#    #+#             */
/*   Updated: 2019/11/15 16:53:51 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *str, int c, size_t nb)
{
	size_t	cont;
	char	*punt;

	cont = 0;
	punt = str;
	while (nb > cont)
	{
		punt[cont] = c;
		cont++;
	}
	return (str);
}
