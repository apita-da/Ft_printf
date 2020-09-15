/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 16:01:42 by apita-da          #+#    #+#             */
/*   Updated: 2019/11/29 17:30:10 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordcount(char const *s, char c)
{
	int		cont;
	int		wcount;

	cont = 0;
	wcount = 0;
	while (s[cont] != '\0')
	{
		if (s[cont] == c)
			cont++;
		else
		{
			while (s[cont] != c && s[cont] != '\0')
				cont++;
			wcount++;
		}
	}
	return (wcount);
}
