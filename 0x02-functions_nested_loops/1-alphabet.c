#include "holberton.h"
/**
  * print_alphabet - Print the alphabets in lowercase
  *
  * Return: 0
  */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
	_putchar(x);
	}
	_putchar('\n');
}
