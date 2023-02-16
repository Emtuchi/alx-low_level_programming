#include <stdio.h>
/**
 * main - A program that prints the size of various types
 * Return: 0
 */
int main(void)
{
	int i;
	char c;
	long int li;
	long long int lli;
	float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(li));
printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(lli));
printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}
