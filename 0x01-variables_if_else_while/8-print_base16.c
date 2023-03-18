#include <stdio.h>

/**
  *main - Entry point
  *
  *Description: Print numbers of base 16
  *
  *Return: Always 0 (success)
  */

int main(void)
{
	char letter = 'a';
	int num = 0;

	while (num < 10)
	{
		putchar((num % 10) + '0');
		num++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
