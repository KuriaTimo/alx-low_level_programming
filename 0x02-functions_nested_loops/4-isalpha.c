#include "main.h"

/**
  * _isalpha - checks for alphabets
  *
  * Definition: uppercase and lowercase letters
  *
  * @c: ASCII character
  *
  * Return: 1 (if uppercase or lowercase)
  */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
