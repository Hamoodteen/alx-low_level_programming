#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* positive_or_negative - function that prints if integer is positive or negative
* Return: void
*/

void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
else if (i < 0)
{
printf("%d is negative\n", i);
};
}

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest;

if (a > b && b > c)
{
largest = a;
}
else if (b > a && a > c)
{
largest = b;
}
else
{
largest = c;
}

return (largest);
}

#endif /* MAIN_H */
