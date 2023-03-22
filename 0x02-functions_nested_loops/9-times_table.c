#include "main.h"

/**
  * times_table - table for 9
  *
  * Description: Prints the 9 times table
  *
  *Return: Void
  */

void times_table(void)
{
	int num1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int num2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i;
	int j;
	int result;
	int first_digit;
	int last_digit;

	i = 0;

	while (i <= 9)
	{
		j = 0;

		while (j <= 9)
		{
			result = num1[i] * num2[j];
			first_digit = result / 10;
			last_digit = result % 10;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
					_putchar(' ');
			}
			if (result < 10)
				_putchar('0' + result);
			else
			{
				_putchar('0' + first_digit);
				_putchar('0' + last_digit);
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
