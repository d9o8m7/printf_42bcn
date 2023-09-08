#include <unistd.h>
#include <stdbool.h>
#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <wchar.h>
#include <fcntl.h>

/*SOME PRINTF TEST*/

int	main()
{
	int	result;

	result = 0;
	printf("///printf///\n");
	result = printf("%s", "");
	printf("\n");
	printf("%d\n", result);
	printf("///ft_printf///\n");
	result = ft_printf("%s", "");
	printf("\n");
	printf("%d\n", result);
	return (0);
}
