#include "main.h"
#include <stdio.h>

/**
* print_array - prints n digit of an array
* @a: array
* @n: number of array elements.
* Return: nothing
*/
void print_array(int *a, int n)
{
	int s;

	for (s = 0; s < n; s++)
	{
		printf("%d, ", a[s]);
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
