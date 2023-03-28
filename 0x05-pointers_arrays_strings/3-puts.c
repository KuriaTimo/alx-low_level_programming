#include "main.h"

/**
  * main: _puts - count string characters
  * Description:
  * @str: string pointer
  * Return: void
  */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
