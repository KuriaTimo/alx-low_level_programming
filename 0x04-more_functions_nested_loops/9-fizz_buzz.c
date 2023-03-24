#include "main.h"

/**
  * main - FizzBuzz test
  *
  * Descriptions: Prints 1-100
  *
  * Return: 0
  */

int main(void)
{
	int i;

	i = 1;

	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			if (i == 100)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");
	return (0);
}
