#include "main.h"

/**
  * print_alphabet - print_alphabet
  *
  * Description: prints the alphabet in lowercase
  *
  * Return: void
  */

void print_alphabet(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		_putchar(lower);
		lower++;
	}

	_putchar('\n');
}
