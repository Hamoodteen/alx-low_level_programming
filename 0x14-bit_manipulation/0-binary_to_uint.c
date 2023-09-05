#include "main.h"
/**
 * binary_to_uint - f
 * @b: char
 * Return: int
*/
unsigned int binary_to_uint(const char *b)
{
	int dec = 0;
	int pow = 1;
	int i;
	size_t check;

	if (b == NULL)
	{
		return (0);
	}
	for (check = 0 ; check < strlen(b) ; check++)
	{
	if ((b[check] != '0') && (b[check] != '1'))
	{
		return (0);
	}
	}
	for (i = strlen(b) - 1 ; i >= 0 ; i--)
	{
		if (b[i] == '1')
		{
			dec += pow;
		}
		pow *= 2;
	}
	return (dec);
}
