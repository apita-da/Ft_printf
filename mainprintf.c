/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apita-da <apita-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 15:23:01 by apita-da          #+#    #+#             */
/*   Updated: 2020/02/24 11:35:30 by apita-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"

int	main(void)
{
	printf("%c");
	ft_printf("%c");
	printf("%d");
	ft_printf("%d");
	printf("%s");
	ft_printf("%s");
	printf("%p");
	ft_printf("%p");
	printf("%i");
	ft_printf("%i");
	printf("%u");
	ft_printf("%u");
	printf("%x");
	ft_printf("%x");
	printf("%X");
	ft_printf("%X");
	system("leaks a.out");
}
