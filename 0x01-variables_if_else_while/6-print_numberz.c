#include <stdio.h>

/**
 * main - Entry point
 * Return:This returns base 10 values starting from 0 followed by a new line
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

