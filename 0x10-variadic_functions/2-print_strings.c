#include "variadic_functions.h"
/**
  *print_strings - prints a string
  *@separator: the divider of strings
  *@n: is the number of strings
  *Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	if (n == 0)
		printf("\n");
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i + 1 != n && separator != NULL)
		{
			printf("%s", separator);
		}
		else if (i + 1 == n)
		{
			printf("\n");
		}
	}
	va_end(ap);
}
