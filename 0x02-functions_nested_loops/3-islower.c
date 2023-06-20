#include "main.h"
/**
 * _islower- checks for lowercase character.
 *
 * @cha: check character
 *
 * Return: 1 if c is lowercase, or 0 otherwise
 */
int _islower(int cha)

{
	if (cha >= 97 && cha <= 122)
	{
		return (1);
	}
	return (0);
}
