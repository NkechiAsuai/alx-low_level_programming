#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: an array of integers
 * @n: number of elements of an array
 */
void reverse_array(int *a, int n)
{
int e;
int temp;

e = 0;
n = n - 1;

while (e < n)
{
temp = a[e];
a[e] = a[n];
a[n] = temp;
e++;
n--;
}
}
