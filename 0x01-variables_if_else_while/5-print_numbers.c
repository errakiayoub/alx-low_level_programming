#include<stdio.h>
/**
 * main-prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 if succesful
 *
 */

int main(void){
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
	{
		putchar((numbers % 10) + '0');
	}
		putchar('\n');
		return (0);
	}
