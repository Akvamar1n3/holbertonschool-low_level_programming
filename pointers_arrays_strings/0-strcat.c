#include "main.h"
/**
 * _strcat - func
 * @dest: pointer
 * @src: pointer
 * Return: sum 2 of this
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
		dest[a++] = src[b++];
	dest[a] = '\0';

	return (dest);
}