#include "main.h"
/**
 * main - Entry point
 * Return: 0 always (Success)
 */
void print_alphabet(void)
{
	char n;
	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
