#include <stdio.h>
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

	if (n >= 98)
	{
		while (n > 98)
			printf(%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d", ", n++);
		printf("%d\n", n);
	}
}
