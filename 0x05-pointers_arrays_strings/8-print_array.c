#include "main.h"
#include <stdio.h>
/**
 * print_array -> a function  that prints an elemeny of an array
 * @a: array name
 * @n: the number of element of the array to be printed
 * Return: a and n inputs
*/
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(',');
	}
	printf('\n');
}
