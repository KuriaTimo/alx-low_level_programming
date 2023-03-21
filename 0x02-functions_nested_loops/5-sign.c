#include "main.h"

/**
  * print_sign - prints a sign of a number
  *
  * Description: assigns signs respectively
  *
  * @n: is an integer
  *
  * Return: 1 (if positve), 0 (if zero), -1 (if negative)
  */

int print_sign(int n)
{
	char positive, negative, zero;

	positive = '+';
	negative = '-';
	zero = '0';

	if (n > 0)
	{
		_putchar(positive);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(zero);
		return (0);
	}
	else
	{
		_putchar(negative);
		return (0);
	}
}
