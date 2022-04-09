#include <stdio.h>

/**
 * main - create 2 pairs of numbers that do not repeat
 * Return: 0
 */
int main(void)
{
	int c, d;

	for (c = 0; c <= 99; c++)
	{
		for (d = c; d <= 99; d++)
		{
			if (d != c)
			{

				putchar(c / 10 + 48);
				putchar(c % 10 + 48);
				putchar(' ');
				putchar(d / 10 + 48);
				putchar(d % 10 + 48);

				if (c * 100 + d != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}

	}
	putchar('\n');
	return (0);
}
