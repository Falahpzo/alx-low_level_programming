#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase ten times followed by a new line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 1; j <= 10; j++)
	{
		for (j = 97; j <= 112; j++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
