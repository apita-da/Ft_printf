#include "libftprintf.h"

int		main(void)
{
	int ret;
    int ret2;

    ret = 5;
    ret = 20;
    ret = ft_printf("%5.p", NULL);
    printf("\tret mio = %i\n", ret);
    ret2 = printf("%5p", &ret);
    printf("\tret bueno = %i\n", ret2);
    // ret = ft_printf("%.0s", "hello");
    // printf("\tret mio = %i\n", ret);
    // ret2 = printf("%.0s", "hello");
    // printf("\tret bueno = %i\n", ret2);
	// ret = ft_printf("%-15.10s", "123456");
    // printf("\t ret mio = %i\n", ret);
    // ret2 = printf("%-15.10s", "123456");
    // printf("\t ret bueno = %i\n", ret2);
//     int n = 15;
//     printf("Numero %i -> %i\n", n, ft_count_num(n));
//     n = 0;
//     printf("Numero %i -> %i\n", n, ft_count_num(n));
//     n = -15;
//     printf("Numero %i -> %i\n", n, ft_count_num(n));
//     n = -250;
//     printf("Numero %i -> %i\n", n, ft_count_num(n));
//     n = -3;
//     printf("Numero %i -> %i\n", n, ft_count_num(n));
//     n = 800;
//     printf("Numero %i -> %i\n", n, ft_count_num(n));
//     n = 1564564;
//     printf("Numero %i -> %i\n", n, ft_count_num(n));
//     n = -35464654;
//     printf("Numero %i -> %i\n", n, ft_count_num(n));
}