#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main- assign a random number to the variable n each time it is executed
 * Return:0 if successful
 */

int main(void)
{
	int i;

	srand(time(0));
	i = rand() - RAND_MAX / 2;
	if ((i % 10) > 5)
{
        printf("Last digit of %d is %d and is less than 6 and not 0\n", i, i % 10);
	else if ((i % 10) < 6 && (i % 10) !=0)
{
	printf("Last digit of %d  is %d and is greater than 5\n", i, i % 10);
	else
{
	printf("Last digit of %d is 0 and is 0\n", i);
}
return (0);
}
