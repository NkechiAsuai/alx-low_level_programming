#include<stdio.h>
/**
* main - entry point
* Description: Prints all possible different combinations of three digits
*Return: Always 0
*/
int main(void)
{
int c, d, e;

for (c = 48; c < 58; c++)
{
for (d = 48; d < 58; d++)
{
for (e = 48; e < 58; e++)
{
if (c != e && c < d)
if (d != e && d < e)
{
putchar(c);
putchar(d);
putchar(e);
if (c != 55 || d != 56 || e != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
