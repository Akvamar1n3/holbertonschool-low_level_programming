#include "main.h"
/**
 * print_numbers - func
 */
void print_numbers(void)
{
	int a = '0';

	while (a <= '9')
	{
		_puthcar(a);
		a++;
	}
	_putchar("\n");
}
