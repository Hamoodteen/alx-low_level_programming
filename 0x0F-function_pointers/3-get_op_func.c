#include "3-op_functions.c"
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
        while (i < 5)
        {
            if (strcmp(s, ops[i].op) == 0)
            {
                return (ops[i].f);
            }
            i++;
        }
        return (NULL);
}
