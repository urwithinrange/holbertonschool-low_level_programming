#include "variadic_functions.h"
/**
  *fun_char - prints a char
  *@ap: the bit to be printed
  */
void fun_char(va_list ap)
{
	char c = va_arg(ap, int);

	printf("%c", c);
}

/**
  *fun_int - prints an int
  *@ap: bits to be printed
  */
void fun_int(va_list ap)
{
	int n = va_arg(ap, int);

	printf("%d", n);
}
/**
  *fun_float - prints a float
  *@ap: bits to be printed
  */
void fun_float(va_list ap)
{
	float n = va_arg(ap, double);

	printf("%f", n);
}
/**
  *fun_string - prints a string or nil for passed NULL
  *@ap: bits to be printed
  */
void fun_string(va_list ap)
{
	char *temp;

	temp = va_arg(ap, char *);
	if (temp == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", temp);
}
/**
  *print_all - prints anything
  *@format: is the format of whatever is passed
  *
  *Return: void
  */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *sep = "";
	int i = 0, j;

	fp_t fmp[] = {
		{"c", fun_char},
		{"i", fun_int},
		{"f", fun_float},
		{"s", fun_string},
	};

	va_start(ap, format);
	while (format != NULL && format[i] != '\0') /* passing arg */
	{
		j = 0;
		while (j < 4 && fmp[j].spec[0] != format[i]) /* check type */
			j++;
		if (j < 4)
		{
			printf("%s", sep); /* print first arg */
			fmp[j].function_pointer(ap);
			sep = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(ap);
}


