#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int i;
	srand(time(0));
	i = rand() -RAND_MAX / 2;
	printf("Last digit of %d and is ", n, n % 10);
	if (n % 10 > 5)
	{
		printf("greater than 5\n");
	}
	else if (n % 10 == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("Less than 6 and not 0\n");
	}
	return (0)
}
