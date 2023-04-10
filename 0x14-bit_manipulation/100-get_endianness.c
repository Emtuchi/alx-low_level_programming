#include "main.h"

/**
 * get_endianness - checks the endiannesses
 *
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	unsigned int n = 1;
	char *e = (char *)&n;

	if (*e)
	{
		return (1);
	}

	return (0);
}
