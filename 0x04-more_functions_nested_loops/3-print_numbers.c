#include "holberton.h"
/**
  * print_numbers - Print from 0 - 9
  *
  */
void print_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
