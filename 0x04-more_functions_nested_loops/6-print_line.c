#include "main.h"

/**
 * print_line - primt the character "_" n times to fra a newm line
 * @n: number of cbaracters to draw
 */

void print_line(int n)
{
	int times = n;

	for (times = n; times > 0; times--)
		_putchar('_');

	_putchar('\n');
}

