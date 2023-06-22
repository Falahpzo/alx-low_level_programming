#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: Starting number
 *
 * Description: This function prints all natural numbers from n to 98,
 *              separated by commas and spaces.
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				_putchar((i / 10) + 48);
				_putchar((i % 10) + 48);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((i / 10) + 48);
				_putchar((i % 10) + 48);
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				_putchar((i / 10) + 48);
				_putchar((i % 10) + 48);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((i / 10) + 48);
				_putchar((i % 10) + 48);
			}
		}
	}

	_putchar('\n');
}
