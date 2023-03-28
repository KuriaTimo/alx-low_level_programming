#include "main.h"

/**
  * swap_int - swaps value of int
  * 
  * Description:
  *
  * @a: pointer
  * @b: pointer
  *
  * Return: Void
  */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
