#include "main.h"

/**
 * _strcat - Concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int count_dest = 0;
	int count_src = 0;

	while (*(dest + count_dest) != '\0')
	{
		count_dest++;
	}

	while (*(src + count_src) != '\0')
	{
		*(dest + count_dest) = *(src + count_src);
		count_dest++;
		count_src++;
	}

	*(dest + count_dest) = '\0';

	return (dest);
}
