#include<stdio.h>
/**
 * main-prints the alphabet in lowercase, followed by a new line
 * Return:0 if successful
 */

int main(void)

{
	int e;


	for (e = 'a' ; e <= 'z' ; e++)
	{

		if (e != 'q' && e != 'e')


			putchar(e);
	}

	putchar('\n');
	return (0);
}
