#include "main.h"
/**
 * reverse_array -> reversing an array
 * @a: array a
 * @n: an element of an array
*/
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
