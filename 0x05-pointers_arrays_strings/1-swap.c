#include "main.h"
/**
<<<<<<< HEAD
 * swap_int - updates the value it points to to 98.
 * @a: input integer.
=======
 * swap_int - updates the value it points to 98.
 * @a: input integer
>>>>>>> 39d2800a6858c2cd15309161e3f1e04c667c3197
 * @b: input integer
 * Return: no return.
 */
void swap_int(int *a, int *b)
{
<<<<<<< HEAD
    int buffer;
    buffer = *a;
    *a = *b;
    *b = buffer;
=======
	int buffer;

	buffer = *a;
	*a = *b;
	*b = buffer;
>>>>>>> 39d2800a6858c2cd15309161e3f1e04c667c3197
}
