#include "main.h"

/**
  * print_alphabet_x10 - print alphabet 10 times
  *
  * Description: print the alphabet in lowercase 10 times
  *
  * Return: Void
  */

void print_alphabet_x10(void)
{
	int line = 0;
	char lower;

	while (line < 10)
	{
		lower = 'a';

		while (lower <= 'z')
		{
			_putchar(lower);
			lower++;
		}

		_putchar('\n');
		line++;
	}
}
