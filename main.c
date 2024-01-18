#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
int	main(int argc, char** argv)
{
	int	i = 10;

	printf("	Original printed = %d \n", printf("Literal"));
	printf("	My own   printed = %d \n", ft_printf("Literal"));
	ft_putchar_fd('\n', 1);
	printf("	Original printed = %d \n", printf("Char %c", 'a'));
	printf("	My own   printed = %d \n", ft_printf("Char %c", 'a'));
	ft_putchar_fd('\n', 1);
	printf("	Original printed = %d \n", printf("int %d", -54));
	printf("	My own   printed = %d \n", ft_printf("Int %d", -54));
	ft_putchar_fd('\n', 1);
	printf("	Original printed = %d \n", printf("String %s", "hola mundo"));
	printf("	My own   printed = %d \n", ft_printf("String %s", "hola mundo"));
	ft_putchar_fd('\n', 1);
	printf("	Original printed = %d \n", printf("String %s", (char *)NULL));
	printf("	My own   printed = %d \n", ft_printf("String %s", (char *)NULL));
	ft_putchar_fd('\n', 1);
	printf("	Original printed = %d \n", printf("pointer %p", &i));
	printf("	My own   printed = %d \n", ft_printf("pointer %p", &i));
	ft_putchar_fd('\n', 1);
	printf("	Original printed = %d \n", printf("LONG_MAX %p LONG_MIN %p", LONG_MAX, LONG_MIN));
	printf("	My own   printed = %d \n", ft_printf("LONG_MAX %p LONG_MIN %p", LONG_MAX, LONG_MIN));
	ft_putchar_fd('\n', 1);
	printf("	Original printed = %d \n", printf("UNLONG_MAX %p", ULONG_MAX));
	printf("	My own   printed = %d \n", ft_printf("UNLONG_MAX %p", ULONG_MAX));
	ft_putchar_fd('\n', 1);
	printf("	Original printed = %d \n", printf("uint %u", UINT_MAX));
	printf("	My own   printed = %d \n", ft_printf("uint %u", UINT_MAX));
	ft_putchar_fd('\n', 1);
	printf("	Original printed = %d \n", printf("hex %x", -200000));
	printf("	My own   printed = %d \n", ft_printf("hex %x", -200000));
	ft_putchar_fd('\n', 1);
	printf("	Original printed = %d \n", printf("hex %X", 1723788));
	printf("	My own   printed = %d \n", ft_printf("hex %X", 1723788));
}