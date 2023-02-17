#include <stdio.h>
/**
 * main - Entry point for code
 * Return: 0 (success)
 */
int main(void)
{
	char lc;

	for (lc = "a"; lc = "z"; lc++)
	{
		if (lc != 'q' && lc != 'q')
			putchar(lc);
	}

	putchar('\n');

	return (0);
}
