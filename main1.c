# include "libftprintf.h"

int		main(void)
{
	int ret, ret2;

	ret = 0;
	ret2 = 15;
    ret = ft_printf("%3.s", "hi\0low");
    printf("\tret mio = %i\n", ret);
    //ret2 = printf("%3.s", "hi\0low");
    //printf("\tret bueno = %i\n", ret2);
	// ret = ft_printf("%-15.10s", "123456");
    // printf("\t ret mio = %i\n", ret);
    // ret2 = printf("%-15.10s", "123456");
    // printf("\t ret bueno = %i\n", ret2);
}