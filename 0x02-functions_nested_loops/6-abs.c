#include "holberton.h"
/**
  * _abs - Computers the absolute value of an intger
  * @n: any number
  *
  * Return: 0
  */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
		return (n);
}
