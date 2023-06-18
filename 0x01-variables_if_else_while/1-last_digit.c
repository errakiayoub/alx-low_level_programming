#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main- 
 * Return:0 if successful
 */

int main(void)
{
	int d;

	srand(time(0));
	d = rand() - RAND_MAX / 2;
	if ((d % 10) < 6 && (d % 10) !=0)
{
	printf("Last digit of %d  is %d and is greater than 5\n", d, d % 10);
}
else if ((d % 10) > 5)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", d, d % 10);
}
else
{
	printf("Last digit of %d is 0 and is 0\n", d, d %10);
}
return (0);
}
