#include "main.h"
/**
 *jack_bauer - prints every minute of the day of Jack Bauer
  */
void jack_bauer(void)
{
	int min;
	int hr;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hr / 10) + 48);
			_putchar((hr % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
		}
	}
}
