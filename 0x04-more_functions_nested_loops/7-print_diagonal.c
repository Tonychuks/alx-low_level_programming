#include <stdio.h>
#include "main.h"

/**
* print_diagonal - print a diagonal
* @n: parameter
* Return: returns nothing
*/

void print_diagonal(int n)
{
	int len, space;
	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (space = 0; spac < len; space++)
			{
				putchar(' ');
			}
			ptuchar('\\');

			if (len == (n - 1))
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
