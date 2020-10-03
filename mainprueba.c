/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 22:59:11 by marvin            #+#    #+#             */
/*   Updated: 2020/07/30 22:59:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int   main()
{	
	
    // %  
	ft_printf("Hol%%, caracola\n");
    printf("Hol%%, caracola\n");
    ft_printf("%\n");
    ft_printf("%%\n");
	//printf("%\n");
    printf("%%\n");

	/*printf("%%\n");
	ft_printf("%%\n");
	printf("[%5]\n");
	ft_printf("[%5]\n");
	printf("[%05]\n");
	ft_printf("[%05]\n");*/
    
    // CHARACTER
    //printf("char:                    %c\n", 'r');
    //ft_printf("char:                    %c\n", 'r');


    // %d --> prints a number in the simple way

    //printf("%d\n", 0);
    //ft_printf("%d\n", 0);
    //printf("%d\n", -7);
    //ft_printf("%d\n", -7);
    //printf("%d\n", 1560133635);
    //ft_printf("%d\n", 1560133635);
    //printf("%d\n", -2035065302);
    //ft_printf("%d\n", -2035065302);
	
	/*//ft_printf("|%5d|\n", 0);
	printf("|%5d|\n", 0);
	//ft_printf("|%5d|\n", -7);
	printf("|%5d|\n", -7);
	//ft_printf("|%5d|\n", 1560133635);
	printf("|%5d|\n", 1560133635);
	//ft_printf("%050 d\n", -2035065302);
	printf("|%5d|\n", -2035065302);*/
	/*printf("int 0d: |%0d|\n", 0);
	ft_printf("int 0d: |%0d|\n", 0);
	printf("int 0d: |%0d|\n", 3);
	ft_printf("int 0d: |%0d|\n", 3);
	printf("int 09d: |%09d|\n", 43);
	ft_printf("int 09d: |%09d|\n", 43);
	printf("int 050 d: |%005 d|\n", 500);
	ft_printf("int 050 d: %050 d|\n", 500);
	printf("int 050d: |%050d|\n", 500);
	ft_printf("int 050d: |%050d|\n", 500);
	printf("int with .*d: |%05.*d|\n", -15, 42);
	ft_printf("int with .*d: |%05.*d|\n", -15, 42);*/
	/*ft_printf("precision                |%.9d|\n", 43);
	printf("precision                |%.9d|\n", 43);
	ft_printf("min width                |%9d|\n", 43);
	printf("min width                |%9d|\n", 43);*/
	/*ft_printf("left adjusted            |%-9d|\n", 43);
	printf("left adjusted            |%-9d|\n", 43);
	ft_printf("left adjusted            |%*d|\n", -5, 43);
	printf("left adjusted            |%*d|\n", -5, 43);
	ft_printf("width wildcard           |%*d|\n", 5, 43);
	printf("width wildcard           |%*d|\n", 5, 43);
	ft_printf("precision wildcard       |%.*d|\n", 5, 43);
	printf("precision wildcard       |%.*d|\n", 5, 43);
	ft_printf("precision/width wildcard |%*.*d|\n", 5, 3, 43);
	printf("precision/width wildcard |%*.*d|\n", 5, 3, 43);
	ft_printf("overwrite                |%*3d|\n", 5, 43);
	printf("overwrite                |%*3d|\n", 5, 43);
	ft_printf("overwrite neg            |%*-1d|\n", 0, 43);
	printf("overwrite neg            |%*-1d|\n", 0, 43);*/


    /*printf("The maximum value for an unsigned int is: %u\n", UINT_MAX);
	printf("\033[36muint:                    %u\n", 5);
    ft_printf("\033[39muint:                    %u\n", 5);
	printf("\033[36muint:                    %u\n", 4294967298);
    ft_printf("\033[39muint:                    %u\n", 4294967298);
	printf("\033[36muint:                    %u\n", 42);
    ft_printf("\033[39muint:                    %u\n", 42);
	printf("\033[36muint:                    %u\n", -501);
    ft_printf("\033[39muint:                    %u\n", -501);
	printf("\033[36muint:                    %u\n", 1 << 31);
    ft_printf("\033[39muint:                    %u\n", 1 << 31);
    
	
	printf("\033[36mhex lower:               %x\n", 0xabcf012);
    ft_printf("\033[39mhex lower:               %x\n", 0xabcf012);
    printf("\033[36mhex upper:               %X\n", 0xabcf012);
    ft_printf("\033[39mhex upper:               %X\n", 0xabcf012);

    
    printf("%i\n", 0);
    ft_printf("%i\n", 0);
    printf("%i\n", -7);
    ft_printf("%i\n", -7);
    printf("%i\n", 1560133635);
    ft_printf("%i\n", 1560133635);
    printf("%i\n", -2035065302);
    ft_printf("%i\n", -2035065302);*/

	// %s --> prints a string
    
    //printf("print s%string\n", "HHH");
    //ft_printf("print s%string\n", "HHH");

    /*printf("string: |%s|\n", "bonjour");
	ft_printf("string: |%s|\n", "bonjour");
	printf("string padding 09: |%09s|\n", "bo\\n");
	ft_printf("string padding 09: |%09s|\n", "bo\\n");*/
    /*printf("string 020: |%020s|\n", "bo\\n");
    ft_printf("string 020: |%020s|\n", "bo\\n");
    printf("string .9: |%.9s|\n", "jesuisbonjourbonjour");
	ft_printf("string .9: |%.9s|\n", "jesuisbonjourbonjour");*/
    /*printf("string .29: |%.29s|\n", "jesuisbonjourbonjour");
	ft_printf("string .29: |%.29s|\n", "jesuisbonjourbonjour");*/

    //printf("string .1: |%.1s|\n", "bonjour");
	//ft_printf("string .1: |%.1s|\n", "bonjour");
    /*printf("string 03.1s: |%03.1s|\n", "Hallo heimur");
	ft_printf("string 03.1s: |%03.1s|\n", "Hallo heimur");
	printf("string 015.5: |%015.5s|\n", "Hallo heimur");
	ft_printf("string 015.5: |%015.5s|\n", "Hallo heimur");*/
    /*printf("string 025.8: |%025.8s|\n", "Hallo heimur");
	ft_printf("string 025.8: |%030.8s|\n", "Hallo heimur");*/


	//printf("pointer 010p: |%010p|\n", 0x1);
	//ft_printf("pointer 010p: |%010p|\n", 0x1);
	//printf("pointer .0p, .p: |%.0p, %.p|\n", 0, 0);
	//ft_printf("pointer .0p, .p: |%.0p, %.p|\n", 0, 0);

	/* ft_printf("bonjour%nyi", &test); */
	/* ft_printf("%hi\n", 32768); */
    /*    printf("%hi\n", 32768); */
	/* ft_printf("%.37ld", -22337203685477l); */
	

	//char *test = "bla";
	//ft_printf("bonjour\n");
    
    //ft_printf("string: %s", "bonjour\n");
    //printf("pointer by real function:        %p and %s\n", &test, test);
	//ft_printf("pointer by real function:        %p and %s\n", &test, test);
    /* ft_printf("int:                     %d or %i\n", 45, 54); */
    /* ft_printf("uint:                    %u\n", 1 << 31); */
    /* ft_printf("hex lower:               %x\n", 0xabcf012); */
    /* ft_printf("hex upper:               %X\n", 0xabcf012); */
    /* ft_printf("percent:                 %%\n"); */
	/* ft_printf("multiple stuff:          %d %u %d %x %d\n", 1, -2, 3, 0xa, 5); */
    /*  */
	
	

    //printf("pointer field width      |%15p|\n", &test);
    //ft_printf("pointer field width      |%15p|\n", &test);

	/* ft_printf("bonjour%n", &test); */
	/* printf("%d\n", test); */
	

	/* ft_printf("%f\n", 0.14159); */
	/*    printf("%f\n", 0.14159); */
	/* ft_printf("%f\n", 3.14159); */
	/*    printf("%f\n", 3.14159); */
	/* ft_printf("%f\n", -3.14159); */
	/* ft_printf("%f\n", 334.141519); */
	/* ft_printf("%lf\n", 212.0); */
	/*    printf("%lf\n", 212.0); */
	/*    printf("%f\n", 212.0); */
    
    
    return (0);
}