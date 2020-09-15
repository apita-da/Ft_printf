/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 18:30:50 by apita-da          #+#    #+#             */
/*   Updated: 2019/11/29 17:23:23 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	long int	nb;
	int			cont;
	char		*str;

	nb = (long int)n;
	cont = ft_intlen(nb);
	if (nb == 0)
		return (ft_strdup((const char *)"0"));
	if (!(str = malloc(sizeof(char) * ft_intlen(nb) + 1)))
		return (NULL);
	str[cont] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb >= 10)
	{
		str[--cont] = (nb % 10 + 48);
		nb /= 10;
	}
	str[--cont] = (nb / 10 + 48);
	str[cont] = (nb % 10 + 48);
	return (str);
}
