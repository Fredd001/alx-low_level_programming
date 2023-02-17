#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low, cap;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	for (cap = 'A'; cap <= 'Z'; cap++)
	{
		putchar(cap);
	}
	putchar('\n');
	return (0);
}
