#include "main.h"
/**
 * print_alphabet_x10 - check the code
 */

void print_alphabet_x10(void)
{
	char i;
	char j;

	for (j = 1; j <= 10; j++)
	{

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar ('\n');
	}
}
