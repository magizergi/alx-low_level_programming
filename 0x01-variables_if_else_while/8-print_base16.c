#include <stdio.h>
/**
 *main - Entry point
 *Description: 'the program's description'
 *Return: Always 0 (Success)
 */
int main(void)
{
int al;
char ch;
for (al = 0; al <= 9; al++)
{
putchar('0' + al);
}
for (ch = 'a'; ch <= 'f' ; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
