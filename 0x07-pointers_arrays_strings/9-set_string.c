#include "holberton.h"
/**
  *set_string - sets the value of a pointer to a char
  *@s: the pointer to be changed
  *@to: what to change s to
  *Return: void
  */
void set_string(char **s, char *to)
{
	*s = to;
}
