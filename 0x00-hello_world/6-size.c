# include <stdio.h>
/**
 * main- entry point of program
 * Return: 0 if success
 */
int main(void)
{
	printf("Size of char: %lu byte (s)\n", sizeof(char));
	printf("Size of int: %d byte (s)\n", sizeof(int));
	printf("Size of long int: %d byte (s)\n", sizeof(long int));
	printf("Size of long long int: %d byte (s)\n", sizeof(long long int));
	printf("Size of float: %lu byte (s)\n", sizeof(float));
	return (0);
}

