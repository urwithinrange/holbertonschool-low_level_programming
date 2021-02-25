#include "holberton.h"
/**
  *helper_func - is a helper function
  *@n: the number being checked
  *@i: the itterator
  *Return: 1 for prime or 0 for not
  */
int helper_func(int n, int i)
{
	if (i < 2 || n < 2 || n % i == 0)
		return (0);
	if (i > (n / 2))
		return (1);
	return (helper_func(n, i + 1));
}
/**
  *is_prime_number - check the number to see if it a prime number
  *@n: the number in question
  *
  *Return: 1 if prime or 0 if not
  */
int is_prime_number(int n)
{
	return (helper_func(n, 2));
}
