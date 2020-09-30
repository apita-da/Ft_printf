# include "libftprintf.h"

int		main(void)
{
	int ret;
    int ret2;

	ret = 0;
	ret2 = 15;
    ret = ft_printf("%.s", "hello");
    printf("\tret mio = %i\n", ret);
    ret2 = printf("%.s", "hello");
    // printf("\tret bueno = %i\n", ret2);
    // ret = ft_printf("%.0s", "hello");
    // printf("\tret mio = %i\n", ret);
    // ret2 = printf("%.0s", "hello");
    // printf("\tret bueno = %i\n", ret2);
	// ret = ft_printf("%-15.10s", "123456");
    // printf("\t ret mio = %i\n", ret);
    // ret2 = printf("%-15.10s", "123456");
    // printf("\t ret bueno = %i\n", ret2);
}