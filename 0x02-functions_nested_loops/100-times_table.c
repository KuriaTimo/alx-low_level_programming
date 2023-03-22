#include "main.h"

/**
  * print_times_table - prints the times table
  * Description: Prints the times table
  * @n: integer
  * Return: void
  */

void print_times_table(int n)
{
	int row, column, product;

	n = 0;
	if (n >= 0 && n < 15)
	{
		row = 0;
		while (row <= n)
		{
			column = 0;
			while (column <= n)
			{
				product = row * column;
				if (column == 0)
					_putchar('0');
				else if (product < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(product % 10 + '0');
				}
				else if (product >= 10 && product < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0');
				}
				else if
				{
					_putchar(',');
					_putchar(' ');
					_putchar(product / 100 + '0');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0');
				}
				column++;
			}
			_putchar('\n');
			row++;
		}
	}
}

