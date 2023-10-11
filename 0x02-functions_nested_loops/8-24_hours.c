#include "main.h"

/**
 * jack_bauer - prints every minute of the day in 24-hour format.
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			char time_str[6]; /* "hh:mm\0" */

			time_str[0] = (hour / 10) + '0';
			time_str[1] = (hour % 10) + '0';
			time_str[2] = ':';
			time_str[3] = (minute / 10) + '0';
			time_str[4] = (minute % 10) + '0';
			time_str[5] = '\0';

			_putchar(time_str[0]);
			_putchar(time_str[1]);
			_putchar(time_str[2]);
			_putchar(time_str[3]);
			_putchar(time_str[4]);
			_putchar(time_str[5]);
			_putchar('\n');
		}
	}
}
