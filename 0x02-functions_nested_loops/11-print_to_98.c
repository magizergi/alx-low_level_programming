#include "main.h"
/**
 *print_to_98 - Entry point
 *@n - start point
 *Description: 'the program's description'
 *Return: Always 0 (Success)
 */
void print_to_98(int n)
{
int x;
for (x = n; x <= 98; x++)
{
_putchar(x);
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
