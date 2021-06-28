#include "holberton.h"
/**
  * print_alphabet_x10 - prints the alphabet 10 times
  *
  * Return: 0
  */

void print_alphabet_x10(void)
{
	char x;
	int i = 0;

	while (i++ <= 9)
	{
	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
		_putchar('\n');
	}
}
