#include "main.h"
/**
 * _atoi - func
 * @s: variable
 * Return: n
 */
int _atoi(char *s)
{
	int i = 0, a = 0, b = 0, n = 0, len = 0, num = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && b == 0)
	{
		if (s[i] == '-')
			++a;

		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';
		}
	}
}
