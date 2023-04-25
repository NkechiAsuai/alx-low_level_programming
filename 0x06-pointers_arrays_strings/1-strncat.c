#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: input parameter string
 * @src: input parameter string
 * @n: times to iterations
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int e;
int f;

e = 0;

while (dest[e] != 0)
{
e++;
}
f = 0;

while (src[f] != 0 && f < n)
{
dest[e] = src[f];
e++;
f++;
}
return (dest);
}
