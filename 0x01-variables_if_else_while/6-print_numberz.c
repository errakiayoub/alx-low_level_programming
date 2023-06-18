#include<stdio.h>
/**
 * main-prints all single digit numbers of base 10 starting from 0
 * Return:0 if successful
 *
 */


int main(void)
{
	int e;

	for (e = 0; e < 10; e++)
		putchar(e + '0');
	putchar('\n');
	return (0);
}
