#include "main.h"

/**
 * print_alphabet - Begin entry
 *this code prints alphabet lowercase
 *this code end with a newline
 *Return 0 as result
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');

}
