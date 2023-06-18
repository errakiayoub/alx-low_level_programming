#include<stdio.h>
/**
 * main-prints the alphabet in lowercase, and then in uppercase, followed by a new line
 * Return: 0 if successful
 */

int main(void)
{
	char e;

	for (e = 'a' ; e <= 'z' ; e++)
	{
		putchar(e);
	}
	for (e = 'A' ; e <= 'Z' ; e++)
	{
		putchar(e);
	}
	putchar('\n')
		return (0);
}
