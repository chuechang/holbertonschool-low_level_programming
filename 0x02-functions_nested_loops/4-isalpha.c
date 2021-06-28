#include "holberton.h"
/**
  * _isalpha - checks if input is a letter
  *
  * @c: the input that needs to be checked
  *
  * Return: 1 if it's a letter
  */
int _isalpha(int c)
{
	int i;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		i = 1;
	else
		i = 0;
	return (i);
}
