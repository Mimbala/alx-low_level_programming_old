#include "main.h"

/**
 * print_alphabet - prints lower case alphabets
 * Return (0)
 */

void print_alphabet(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
