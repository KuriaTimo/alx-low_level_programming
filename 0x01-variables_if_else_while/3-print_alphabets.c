#include <stdio.h>

/**
  *main - Entry point
  *
  *Description: - Prints the alphabet both in uppper and lower cases
  *
  *Return: Always 0 (success)
  */

int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}

	char alphA = 'A';

	while (alphA <= 'Z')
	{
		putchar(alphA);
		alphA++;
	}
	putchar('\n');

	return (0);
}
