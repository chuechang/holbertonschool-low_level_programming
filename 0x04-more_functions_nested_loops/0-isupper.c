#include "holberton.h"
/**
  * _isupper - checks for uppercase character
  *
  * @c: character to be checked
  * Return: 1 if c is uppercase letter, returns 0 if otherwise
  */
int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
