#include "ft_printf.h"
#include <stdio.h>

void test(const char *str);

int	main(int argc, char** argv)
{
	printf("	Original printed = %d \n", printf("Test String 1"));
	printf("	My own   printed = %d \n", ft_printf("Test String 1"));

	printf("	Original printed = %d \n", printf("Test Char %c", 'a'));
	printf("	My own   printed = %d \n", ft_printf("Test Char %c", 'a'));
}