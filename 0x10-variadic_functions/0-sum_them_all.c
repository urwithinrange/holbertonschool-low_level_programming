#include "variadic_functions.h"
/**
  *sum_them_all - returns the sum of all parameters
  *@n: the number of ints being passed
  *
  *Return: the sum of all parameters
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap; /*argument promotion*/
	size_t i, sum;

	if (n == 0)
		return (0);
	va_start(ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, size_t);
	va_end(ap);
	return (sum);
}
