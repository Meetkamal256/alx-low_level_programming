#include "main.h"
/**
<<<<<<< HEAD
 * swap_int - updates the value it points to to 98.
 * @a: input integer.
 * @b: input integer
 * Return: no return.
 */
void swap_int(int *a, int *b)
{
    int buffer;
    
    buffer = *a;
    *a = *b;
    *b = buffer;
=======
 * swap_int - swapping the values of two integers
 *@a: 1st integer is swapped
 *@b: 2nd integer is swapped
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int buffer;

	buffer = *a;
	*a = *b;
	*b = buffer;
>>>>>>> bbd551c628649292391dd371a204d5bbaa736869
}
