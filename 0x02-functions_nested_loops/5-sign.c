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
	
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
