#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 *
 */
void print_alphabet(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}


