#include "libftprintf.h"

int		main(void)
{
	int ret;
    int ret2;

    // ret = 1234569167;
    // ret2 = 1234567169;
    // ret = ft_printf("%16%16p%16p%16p",&ret,&ret2,&ret,&ret2);
    // printf("\tret mio = %i\n", ret);
    // ret2 = printf("%16p%16p%16p%16p",&ret,&ret2,&ret,&ret2);
    // printf("\tret bueno = %i\n", ret2);
    ret = ft_printf("%-*.*s", -7, -10, "yolo");
    printf("\tret mio = %i\n", ret);
    ret2 = printf("%-*.*s",-7, -10, "yolo");
    printf("\tret bueno = %i\n", ret2);
	//ret = ft_printf("%-15.10s", "123456");
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
//     n = 1600;
//     printf("Numero %i -> %i\n", n, ft_count_num(n));
//     n = 1564564;
//     printf("Numero %i -> %i\n", n, ft_count_num(n));
//     n = -35464654;
//     printf("Numero %i -> %i\n", n, ft_count_num(n));
}