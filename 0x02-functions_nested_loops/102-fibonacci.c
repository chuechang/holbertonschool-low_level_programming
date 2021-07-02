#include <stdio.h>
/**
 * main - Fibonacci number list
 *
 * Description: This function prints the first 50 Fibonacci numbers
 * starting with 1 and 2
 * Return: 0 upon successful completion
 */
int main(void)
{
	int x = 3;
	unsigned long fibonacci;
	unsigned long nminus1 = 2;
	unsigned long nminus2 = 1;

	printf("%lu, ", nminus2);
	printf("%lu, ", nminus1);

	while (x <= 50)
	{
		fibonacci = nminus1 + nminus2;
		printf("%lu", fibonacci);
		if (x < 50)
			printf(", ");
		nminus2 = nminus1;
		nminus1 = fibonacci;
		x++;
	}
	printf("\n");
	return (0);
}
