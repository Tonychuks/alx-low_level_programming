#include "main.h"
/**
*main - entry point 
*print_alphabet_x10 -> prints 10 times lowercase alphabets
*
* Return: always 0 (success)
*/
void print_alphabet_x10(void)
{
	int j;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
