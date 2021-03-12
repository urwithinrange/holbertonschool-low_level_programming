#include "variadic_functions.h"
/**
  *print_numbers - prints numbers followed by new line
  *@separator: printed in the space between numbers
  *@n: the number of inteters passed
  *Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (n == 0)
		printf("\n");
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, unsigned int));
		if (i + 1 != n && separator != NULL)
			printf("%s", separator);
		else if (i + 1 == n)
			printf("\n");
	}
	va_end(ap);
}
