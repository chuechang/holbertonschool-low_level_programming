#include "holberton.h"
/**
  * times_table - prints the 9 times table
  *
  * Return: 0
  */
void times_table(void)
{
	int x = 0;
	int y;
	int p;

	while (x < 10)
	{
		y = 0;
		while (y < 10)
		{
			p = x * y;
			if (y == 0)
			{
				_putchar(p + '0');
			}
			else if (p < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(p + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
			y++;
		}
		_putchar('\n');
		x++;
	}
}
