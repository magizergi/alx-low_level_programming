#include <unistd.h>
/**
 *_memset - writes the character c to stdout
 * @s: The character to print
 * @b: The character to print
 * @n: The character to print
 * Return: On success 1
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n ; a++)
{
s[a] = b;
}
return (s);
}
