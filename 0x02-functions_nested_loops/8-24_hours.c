#include "main.h"

/**
  * jack_bauer - prints the 24 hour clock
  *
  * Description: hours and minutes
  *
  * Return: void
  */

void jack_bauer(void)
{
	int hours_1;
	int hours_2;
	int minutes_1;
	int minutes_2;
	int hours;
	int minutes;

	hours = 0;

	while (hours <= 23)
	{
		minutes = 0;

		while (minutes <= 59)
		{
			hours_1 = hours / 10;
			hours_2 = hours % 10;
			minutes_1 = minutes / 10;
			minutes_2 = minutes % 10;

			_putchar('0' + hours_1);
			_putchar('0' + hours_2);
			_putchar(':');
			_putchar('0' + minutes_1);
			_putchar('0' + minutes_2);
			_putchar('\n');
			minutes++;
		}

		hours++;
	}
}
