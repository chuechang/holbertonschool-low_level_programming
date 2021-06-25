#include <stdio.h>
/**
  * main - Prints all single digits
  * Not allowed to use any variables of type char
  *
  * Return: 0
  */
int main(void)
{
	int i;

	for (i = 'O'; i <= 10; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
