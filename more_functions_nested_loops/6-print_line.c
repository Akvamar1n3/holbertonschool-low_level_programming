#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: number of times to print the character '_'
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n')
	}
	else
	{
		for (int i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n')
}
