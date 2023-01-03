#include <unistd.h>
/**
 *_memcpy - writes the character c to stdout
 *@dest:character
 *@src:character
 *@n:character
 *Return:Memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
