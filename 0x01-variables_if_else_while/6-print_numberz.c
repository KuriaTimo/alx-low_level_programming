#include <stdio.h>

/**
  *main - Entry point
  *
  *Description: Prints digit numbers of base 10
  *
  *Return: Always 0 (success)
  */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar((num % 10) + '0');
		num++;
	}
	putchar('\n');

	return (0);
}
