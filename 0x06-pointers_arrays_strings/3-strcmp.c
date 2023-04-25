#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: input parameter
 * @s2: input parameter
 * Return: 0 if equal or b if is different
 */
int _strcmp(char *s1, char *s2)
{
int e = 0;
int f = 0;

while (s1[e] != '\0' && f == 0)
{
f = s1[e] - s2[e];
e++;
}
return (f);
}
