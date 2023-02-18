#include <stdio.h>
/**
 * main - Entry point for code
 * Return: 0 (success)
 */
int main(void)
{
	char lc;

	lc = 'a';
	while
		(lc <= 'z') {
			if ((lc != 'q' && lc != 'e') && lc <= 'z')
				putchar(lc);
			lc++;
		}
	putchar('\n');
	return (0);
}
