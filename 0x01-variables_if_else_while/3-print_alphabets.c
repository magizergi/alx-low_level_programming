#include <stdio.h>
/**
 *main - Entry point
 *Description: 'the program's description'
 *Return: Always 0 (Success)
 */
int main(void)
{
char al;
char tl;
for (al = 'a'; al <= 'z'; al++)
{
putchar(al);
}
for (tl = 'A'; tl <= 'Z'; tl++)
{
putchar(tl);
}
putchar('\n');
return (0);
}
