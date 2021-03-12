#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
  *fprinter - determines what data type is baing passed from main
  *@spec: the specifier
  *@function_pointer: directs list to appropriate function to print
  */
typedef struct fprinter
{
	char *spec;
	void(*function_pointer)(va_list arg);
}fp_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

#endif
