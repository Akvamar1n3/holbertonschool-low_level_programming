#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: number of times to print the character '_'
 */
void print_line(int n)
{
	if (n > 0)
	{
		for (int a = n; a > n; a--)
			_putchar('_');
		_putchar('\n');
	}
	else
		_putchar('\n');
}
