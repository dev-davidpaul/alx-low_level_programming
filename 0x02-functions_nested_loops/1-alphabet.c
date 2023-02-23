#include "main.h"
/**
 * 1-alphabet.c - print the alphabet
 *
 * Return: Always 0 (success)
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'l'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
