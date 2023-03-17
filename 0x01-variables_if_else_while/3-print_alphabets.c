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

	alph = 'A';

	while (alph <= 'Z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');

	return (0);
}
