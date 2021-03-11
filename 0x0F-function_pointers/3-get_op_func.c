#include "3-calc.h"
/**
  * *get_op_func - determines what operator to use for return
  * @s: the operator being passed
  * Return: the function to use or NULL
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (*(ops[i]).op == s[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
