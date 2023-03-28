#include "main.h"
#include <stdio.h>

/**
  * main: print_array - prints n elements of an array
  *
  * Description:
  * @a: array of integers
  * @n: number of items to print
  *
  * Return: Void
   */

void print_array(int *a, int n)
{
	int element;

	if (n > 0)
		for (element = 0; element < n; element++)
		{
			printf("%d", a[element]);
				if (element < n - 1)
					printf(", ");
		}
		printf("\n");
}
