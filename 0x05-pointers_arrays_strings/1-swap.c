#include "main.h"
/**
 * swap_int -> function to swap two numbers
 * @a:value to be swaped
 * @b:value to be swaped
 * return 0
 * error -1
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = *a;
}

