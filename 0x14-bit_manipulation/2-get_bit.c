#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: bit to return.
 * @index: index to get the value at.
 *
 * Return:  value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int a, b;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if (index < 64)
	{
		b = a << index;

		if ((n & b) != 0)
		{
			return (1);
		}

		if ((n & b) == 0)
		{
			return (0);
		}

	}

}
