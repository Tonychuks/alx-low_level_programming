#include <stdio.h>
#include "main.h"
/**
* main - function that checks for uppercase character.
* Return: nothing
*/

int main(void)
{
	int i;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";
	
	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%s", b);
		else if ((i % 3 == 0) && (i % 5 == 0))
				printf("%s", fb);
		else if (i % 3 == 0)
				printf("%s", f);
		else if (i % 5 == 0)
				printf("%s", b);
		else if 
			printf("%d ", i);
	}
	printf('\n');
	return (0);
}
