#include<stdio.h>

/**
 * main-prints all the numbers of base 16 in lowercase
 * Return: 0 if successful
 *
 */

int main(void)
{

	int k;
	char e;

	for (k = 0; k < 10; k++)
	{
		putchar(k + '0');
	}
	for (e = 'a'; e <= 'f'; e++)
	{
		putchar(e);
	}
	putchar('\n');
	return (0);
}
