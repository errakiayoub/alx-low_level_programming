#include "main.h"
/**
 * print_sign - prints the sign of a number.
 *
 * @n: the number
 * Return: 1 for positive number, -1 for négative number, 0 for anything else
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{_putchar(45);
		return (0);
	}
	_putchar (45);
	return (0) ;
}
