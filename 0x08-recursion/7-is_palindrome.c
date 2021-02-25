#include "holberton.h"
/**
 *_strlen_rec - return the length of a string
 *@s: the string
 *
 *Return: the length of the string
 */
int _strlen_rec(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + (_strlen_rec(s + 1)));
}
/**
  *_helper - will make the determineation on if string it palendrom recursivly
  *@s: the string
  *@i: the length of the string
  *@n: the start of the string
  *Return: 1 if palendrome or 0 if not
  */
int _helper(char *s, int i, int n)
{
	if (s[i] != s[n] || *s == '\0')
		return (0);

	else if (i > n)
		return (_helper(s, (i - 1), (n + 1)));
	else
		return (1);
}
/**
  *is_palindrome - returns 1 if a string is a palindrome and 0 if not
  *@s: the string
  *
  *Return: 1 if string is palindrome and 0 if not
  */
int is_palindrome(char *s)
{
	int i = _strlen_rec(s);

	i--;
	return (_helper(s, i, 0));
}
