#include "main.h"

/**
 * _isalpha - check the alphabet
 *@cha: character
 * Return: 1 for alphabet and 0 for anything else
 */
int _isalpha(int cha)
{
	if((cha >= 65 && cha <= 97) || (cha >= 97 && cha <= 122))
	{
		return (1);
	}
	return (0);
}
