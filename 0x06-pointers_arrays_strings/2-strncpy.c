#include "main.h"
/**
 * _strncpy - copie the string
 * @dest: array that returns
 * @src: the pointer that receive the string
 * @n: times to interate
 * Return: the parameter dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int e;

e = 0;
while (e < n && src[e] != '\0')
{
dest[e] = src[e];
e++;
}
e = e;
while (e < n)
{
dest[e] = '\0';
e++;
}
return (dest);
}
