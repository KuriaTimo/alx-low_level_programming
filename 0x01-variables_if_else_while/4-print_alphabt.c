#include <stdio.h>

/**
  *main - Entry point
  *
  *Description: - Prints the alphabet in lowercase except for q and e
  *
  *Return: Always 0 (success)
  */

int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		if (alph != 'e' && alph != 'q')
		putchar(alph);
		alph++;
	}
	putchar('\n');

	return (0);
}
