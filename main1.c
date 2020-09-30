# include "libftprintf.h"

int		main(void)
{
	int ret, ret2;
    ret = ft_printf("%-i", 123);
    printf("\tret mio = %i\n", ret);
    ret2 = printf("%-i", 123);
    printf("\tret bueno = %i\n", ret2);
	// ret = ft_printf("%-15.10s", "123456");
    // printf("\t ret mio = %i\n", ret);
    // ret2 = printf("%-15.10s", "123456");
    // printf("\t ret bueno = %i\n", ret2);
}