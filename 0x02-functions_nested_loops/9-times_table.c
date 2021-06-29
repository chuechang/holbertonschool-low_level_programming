#include "holberton.h"
/**
  * times_table - prints the 9 times table
  *
  * Return: nothing
  */
void times_table(void)
{
	int x, y, p;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');

		for (y = 1; y <= 9; ++y);
		{
			_putchar(',');
			_putchar(' ');

		p = x * y;

		if (p <= 9)
			_putchar(' ');
		else
			_putchar((p / 10) + '0');
		}
		_putchar('\n');
	}
}
