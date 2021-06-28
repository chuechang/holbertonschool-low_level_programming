#include "holberton.h"
/**
  * _islower - checks if input is a lowercase letter
  *
  * @c: the lowercase letter that needs to be checked
  *
  * Return: 1 if lowercase letter, esle 0
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
