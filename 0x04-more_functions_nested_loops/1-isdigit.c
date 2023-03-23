#include "main.h"

/**
  * _isdigit - checks if c is a digit
  *
  * Description: Checks for a digit
  * @c: Integer
  *
  * Return: 1 if it's a digit, 0 otherwise
  */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
