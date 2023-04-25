#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input parameter string
 * @src: input parameter string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int e;
int f;

e = 0;

while (dest[e] != 0)
{
e++;
}

f = 0;

while (src[f] != 0)
{
dest[e] = src[f];
e++;
f++;
}
return (dest);
}
