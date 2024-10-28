#include "main.h"
/**
 * print_line - func
 * @n: vatiable
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = n; a > 0; a--)
			_putchar('_');
		_putchar('\n');
	}
	else
		_putchar('\n');
}



#include "main.h"
/**
 * print_diagonal - func
 * @n: variable
 */
void print_diagonal(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
				_putchar(' ');

			_putchar('\\');

			if (a == (n - 1))
				continue;

		_putchar('\n');
		}
	}
	_putchar('\n');
}
