#include "main.h"
#include <stdio.h>

/**
* print_array - prints n digit of an array
* @a: array
* @n: number of values
* Return: nothing
*/
void print_array(int *a, int n)
{
	int s;

	for (s = 0; s < n; s++)
	{
		if (s != n - 1)
			printf("%d, ", a[s]);
		else
			printf("%d", a[s]);
	}
	putchar(10);
}
