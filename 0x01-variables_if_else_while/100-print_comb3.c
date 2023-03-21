#include<stdio.h>
/**
* main -entry point
* Description: prints all possible different combination of two digits
* Return: Always 0
*/

int main(void)
{
int c, d;

for (c = 48; c < 58; c++)
{
for (d = 48; d < 58; d++)
{
if (c != d && c < d)
{
putchar(c);
putchar(d);
if (c != 56 || d != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
