#include <stdio.h>
/**
 *main - Entry point
 *Description: 'the program's description'
 *Return: Always 0 (Success)
 */
int main(void)
{
int al;
for (al = 0; al <= 9; al++)
{
putchar('0' + al);
if (al != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
