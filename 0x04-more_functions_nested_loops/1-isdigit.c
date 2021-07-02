#include "holberton.h"
/**
  * _isdigit - check if c is a digit
  * @c: variable getting check
  *
  * Return: 1 if digit, otherwise, 0
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
