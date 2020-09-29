# include "libftprintf.h"

int		main(void)
{
	int ret, ret2;
    ret = ft_printf("%1.1i", 123456);
    printf("\tret mio = %i\n", ret);
    ret2 = printf("%1.1i", 123456);
    printf("\tret bueno = %i\n", ret2);
	 /*ret = ft_printf("%015i", 123456);
    printf("\t ret mio = %i\n", ret);
    ret2 = printf("%015i", 123456);
    printf("\t ret bueno = %i\n", ret2);*/
	//printf("prueba:%0*.5f\n", 10, .123454);
	//printf("prueba:%%\n", 10, .123454);
	//ft_printf("tu edad es:%%\n");
	//ft_printf("su edad es:%.*i\n", 10, 123454789);
	//ft_printf("su nombre es: %c \n", 'a');
	//ft_printf("su nombre es: %-7s\n", "pedrito perez");
	//ft_printf("su nombre es: %c %c %c \n", 'a', 'm', 'a');	
	//ft_printf("su nombre es: %-s \nsu edad es: %56555552d\n", "amalia", 25);
	//ft_printf("su edad es:%*i\n", 5, 15);
}