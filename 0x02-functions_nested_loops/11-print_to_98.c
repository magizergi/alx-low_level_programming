#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - Entry point
 *@n:start point
 *Description: 'the program's description'
 *Return: Always 0 (Success)
 */
void print_to_98(int n)
{
int x;
if (n > 98)
{
for (x = n; x <= 98; x--)
{
char a = ',';
printf("%d", x);
if (n != 98)
{
printf("%c", a);
printf(" ");
}
}
}
else
if (n <= 98)
{
for (x = n; x <= 98; x++)
{
printf("%d", x);
if (n != 98)
{
printf("%c", ',');
printf(" ");
}
}
}
_putchar('\n');
}
