#include "main.h"
#include <string.h>

/**
* _strcat -> this is a function strcat
* @dest: first param
* @src: second param
* Return: a string
*/
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (dest = 0, src[index] != 0; index++)
	{
		dest[dest_len++] = src[index];
		dest_len += 1;
	}
	dest[dest_len] = '\0';
	return (dest);
}
