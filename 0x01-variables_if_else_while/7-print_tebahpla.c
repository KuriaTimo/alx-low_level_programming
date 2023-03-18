#include <stdio.h>

/**
  *main - Entry point
  *
  *Description: Prints the alphabet lowercase in reverse
  *
  *Return: Always 0 (success)
  */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');

	return (0);
}
