#include "ft_printf.h"
#include <stdio.h>

void test(const char *str);

int	main(int argc, char** argv)
{
	int	i = 10;

	printf("	Original printed = %d \n", printf("Literal"));
	printf("	My own   printed = %d \n", ft_printf("Literal"));
	ft_putchar_fd('\n', 1);
	printf("	Original printed = %d \n", printf("Char %c", 'a'));
	printf("	My own   printed = %d \n", ft_printf("Char %c", 'a'));
	ft_putchar_fd('\n', 1);
	printf("	Original printed = %d \n", printf("String %s", "hola mundo"));
	printf("	My own   printed = %d \n", ft_printf("String %s", "hola mundo"));
	ft_putchar_fd('\n', 1);
	printf("	Original printed = %d \n", printf("int %d", -54));
	printf("	My own   printed = %d \n", ft_printf("Int %d", -54));
	ft_putchar_fd('\n', 1);
	printf("	Original printed = %d \n", printf("pointer %p", &i));
	printf("	My own   printed = %d \n", ft_printf("pointer %p", &i));
	ft_putchar_fd('\n', 1);
	printf("	Original printed = %d \n", printf("uint %u", (unsigned int)4294967295));
	printf("	My own   printed = %d \n", ft_printf("uint %u", (unsigned int)4294967295));
}