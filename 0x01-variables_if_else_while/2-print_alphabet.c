#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar('\n');
		putchar(alph);
	}
	return (0);
}
