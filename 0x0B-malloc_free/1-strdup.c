#include "main.h"
#include <stdlib.h>
/**
  *_strdup - returns a pointer to a newly alloctaed
  *space in memory which contains a copy of the string
  *passed.
  *@str: pointer to string being duplicated.
  *
  *Return: NULL if str is NULL.
  *pointer to duplicated string on success.
  *NULL if memory was insufficient.
  */
char *_strdup(char *str)
{
char *nstr;
unsigned int a, i;

if (str == NULL)
{
return (NULL);
}

a = 0;
while (str[a] != '\0')
{
a++;
}

nstr = malloc(sizeof(char) * (a + 1));

if (nstr == NULL)
{
return (NULL);
}

for (i = 0; i < a; i++)
{
nstr[i] = str[i];
}
nstr[a] = '\0';
return (nstr);

}
