#include <stdio.h>
/**
*main - Prints all possible different combinations of two digits
*Return: always 0 (Success)
*/

int main(void)
{
	int i, j;
	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar('0' + 1);
			putchar('0' + j);
			if (i > 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}		
