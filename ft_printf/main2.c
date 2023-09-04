/*FULL PRINTF TEST*/

#include <stdio.h>

int	main()
{
	char	c = 'o';
	char	*str = "Maker Thrives";
	int		num = -42;
	unsigned int	unum = 298234214;

	ft_printf("--------------------------------------------\n");
	ft_printf("CHARACTER TEST 4 %%c\t-->\t%c\n", c);
	ft_printf("OG 4 %%c\t-->\t%c\n", c);
	ft_printf("--------------------------------------------\n");
	ft_printf("STRING TEST 4 %%s\t-->\t%s\n", str);
	ft_printf("OG 4 %%s\t-->\t%s\n", str);
	ft_printf("--------------------------------------------\n");
	ft_printf("INTEGER TEST 4 %%i\t-->\t%i\n", num);
	ft_printf("OG 4 %%i\t-->\t%i\n", num);
	ft_printf("--------------------------------------------\n");
	ft_printf("DECIMAL TEST 4 %%d\t-->\t%d\n", num);
	ft_printf("OG 4 %%d\t-->\t%d\n", num);
	ft_printf("--------------------------------------------\n");
	ft_printf("UNSIGNED TEST 4 %%u\t-->\t%u\n", unum);
	ft_printf("OG 4 %%u\t-->\t%u\n", unum);
	ft_printf("--------------------------------------------\n");
	ft_printf("HEXAM TEST 4 %%X\t-->\t%X\n", unum);
	ft_printf("OG 4 %%X\t-->\t%X\n", unum);
	ft_printf("--------------------------------------------\n");
	ft_printf("HEXAm TEST 4 %%x\t-->\t%x\n", unum);
	ft_printf("OG 4 %%x\t-->\t%x\n", unum);
	ft_printf("--------------------------------------------\n");
	ft_printf("POINTER STR TEST 4 %%p\t-->\t%p\n", str);
	ft_printf("OF 4 %%p\t-->\t%p\n", str);
	ft_printf("--------------------------------------------\n");
	ft_printf("TEST 4 ALL %%\n\n%c\n%s\n%i\n%d\n%u\n%X\n%x\n%p\n", c, str,
	num, num, unum, unum, unum, str);
	ft_printf("--------------------------------------------\n");
}
