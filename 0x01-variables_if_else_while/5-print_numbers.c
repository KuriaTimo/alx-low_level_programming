#include <stdio.h>

/**
  *main - Entry point
  *
  *Description: Prints single digit numbers of base 10
  *
  *Return: Always 0 (success)
  */

int main(void)
{
	int a = 0;

	while (a < 10)
	{
		printf("%d", a);
		a++;
	}
	printf("\n");

	return (0);
}
