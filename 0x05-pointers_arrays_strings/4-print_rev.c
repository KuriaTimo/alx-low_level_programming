#include "main.h"

/**
  * main: print_rev - prints string backwards
  *
  * Description:
  * @s: string
  *
  * Return: Void
  */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
