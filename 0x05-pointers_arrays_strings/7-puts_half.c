#include "main.h"

/**
  * main: puts_half - prints half of a string
  *
  * Description:
  * @str: string
  *
  * Return: Void.
  */

void puts_half(char *str)
{
	int i;
	int half;

	half = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		half++;
	}
	if (half % 2 != 0)
	{
		for (i = (half / 2) + 1; i < half; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = half / 2; i < half; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
