#include "main.h"

/**
  * print_numbers - prints numbers
  *
  * Description: Prints the numbers from 0-9
  * @i: integer
  *
  * Return: Void
  */

void print_numbers(void)
{
	int i;

	i = 0;
	
	while (i < 10)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');

	return(0);
}
