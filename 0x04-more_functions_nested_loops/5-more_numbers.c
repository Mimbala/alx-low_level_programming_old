#include "main.h"

/**
 * more_numbers - print 0 to 14 ten tines
 */

void more_numbers(void)
{
int i;
int j;

for (j = 0; j < 10; j++)
{
for (i = 0; i < 15; i++)
{
/* print 2-digit number */
if (i > 9)
_putchar('0' + (i / 10));
_putchar('0' + (i % 10));
}
_putchar('\n');
}
}}

