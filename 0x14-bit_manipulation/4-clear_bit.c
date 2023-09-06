#include "main.h"
/**
 * dectobin - f
 * @dec: int
 * Return: bin
*/
char *dectobin(int dec)
{
	char *bin;
	int i = 0;

	bin = malloc(sizeof(char) * 64);
	while (dec != 0)
	{
		bin[i++] = (dec % 2) ? '1' : '0';
		dec /= 2;
	}
	bin[i] = '\0';
	return (bin);
}
/**
 * bintodec - f
 * @bin: char
 * Return: dec
*/
int bintodec(char *bin)
{
	int dec = 0;
	int pow = 1;
	int i;

	for (i = (strlen(bin) - 1) ; i >= 0 ; i--)
	{
		if (bin[i] == '1')
			dec += pow;
		pow *= 2;
	}
	return (dec);
}
/**
 * clear_bit - f
 * @n: ptr
 * @index: int
 * Return: 1 or -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;
	char *temp;

	num = *n;
	temp = malloc(sizeof(char) * 64);
	temp = dectobin(num);
	if (index > strlen(temp))
		return (-1);
	temp[index] = '0';
	num = bintodec(temp);
	return (1);
}
