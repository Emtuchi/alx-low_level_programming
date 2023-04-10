#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 * flipped to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xr;
	unsigned int num = 0;

	xr = n ^ m;

	while (xr)
	{
		num = num + (xr & 1);
		xr = xr >> 1;
	}

	return (num);
}
