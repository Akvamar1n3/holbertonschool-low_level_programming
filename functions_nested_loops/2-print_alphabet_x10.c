#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 */
void print_alphabet_10x(void);
{
	int a;
	char alph;

	for (a = 0; a <= 9; a++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
			_putchar(alph);
		_putchar('\n')
	}
}


