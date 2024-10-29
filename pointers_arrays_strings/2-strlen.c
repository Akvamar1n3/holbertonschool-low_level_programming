#include "main.h"
/**
 * _strlen - func
 * @s: pointer
 *
 * Return: lengh of a string
 */
void _strlen(char *s)
{
	int a = 0;

	while(s[a] != '\0')

		a++;

	return (a);
}
