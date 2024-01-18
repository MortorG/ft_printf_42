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
	printf("	Original printed = %d \n", printf("ULONG_MAX %p", ULONG_MAX));
	printf("	My own   printed = %d \n", ft_printf("ULONG_MAX %p", ULONG_MAX));
	ft_putchar_fd('\n', 1);
	printf("	Original printed = %d \n", printf("UINT_MAX %u", UINT_MAX));
	printf("	My own   printed = %d \n", ft_printf("UINT_MAX %u", UINT_MAX));
	ft_putchar_fd('\n', 1);
	printf("	Original printed = %d \n", printf("LONG_MAX %x", LONG_MAX));
	printf("	My own   printed = %d \n", ft_printf("LONG_MAX %x", LONG_MAX));
	ft_putchar_fd('\n', 1);
	printf("	Original printed = %d \n", printf("LONG_MIN %x", LONG_MIN));
	printf("	My own   printed = %d \n", ft_printf("LONG_MIN %x", LONG_MIN));
	ft_putchar_fd('\n', 1);
	printf("	Original printed = %d \n", printf("ULONG_MAX %x", ULONG_MAX));
	printf("	My own   printed = %d \n", ft_printf("ULONG_MAX %x", ULONG_MAX));
	ft_putchar_fd('\n', 1);
	printf("	Original printed = %d \n", printf("ZERO %x", 0));
	printf("	My own   printed = %d \n", ft_printf("ZERO %x", 0));
	ft_putchar_fd('\n', 1);
	printf("	Original printed = %d \n", printf("-42 %x", -42));
	printf("	My own   printed = %d \n", ft_printf("-42 %x", -42));
	ft_putchar_fd('\n', 1);
	printf("	Original printed = %d \n", printf("MIX %x %x %x %x %x %x %x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));
	printf("	My own   printed = %d \n", ft_printf("MIX %x %x %x %x %x %x %x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));
	// ft_putchar_fd('\n', 1);
	// printf("	Original printed = %d \n", printf("LONG_MAX %X", LONG_MAX));
	// printf("	My own   printed = %d \n", ft_printf("LONG_MAX %X", LONG_MAX));
	// ft_putchar_fd('\n', 1);
	// printf("	Original printed = %d \n", printf("LONG_MIN %X", LONG_MIN));
	// printf("	My own   printed = %d \n", ft_printf("LONG_MIN %X", LONG_MIN));
	// ft_putchar_fd('\n', 1);
	// printf("	Original printed = %d \n", printf("ULONG_MAX %X", ULONG_MAX));
	// printf("	My own   printed = %d \n", ft_printf("ULONG_MAX %X", ULONG_MAX));
	// ft_putchar_fd('\n', 1);
	// printf("	Original printed = %d \n", printf("ZERO %X", 0));
	// printf("	My own   printed = %d \n", ft_printf("ZERO %X", 0));

	
}