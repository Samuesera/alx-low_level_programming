#include <stdio.h>

/**
 * main - print single digit numbers starting from 0
 *
 * Return: returns zero at the end
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (j > i)
			{
				putchar(',');
				putchar(' ');

			}

		}
	
	}
	
	putchar('\n');

	return (0);

}

