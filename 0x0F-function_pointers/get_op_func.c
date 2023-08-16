#include "3-calc.h"
/**
 * get_op_func - f
 * @a: int
 * @b: int
 * Return: int
*/
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
    	{"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;
    while (i < 6)
    {
        if (s == ops[i].op)
        {
            return ops[i].f;
        }
        i++;
    }
}
