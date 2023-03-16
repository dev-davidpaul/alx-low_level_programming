#include "main.h"
#include <stdlib.h>

int _strlen(char *s);

/**
 * _strlen - count array
 * @s: array fo element
 * Return: 1
*/
int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0') /*count character of string*/
	{
		i++;
	}
	return (1);
}

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
*/
char *str_concat(char *s1, char *s2)
{
	char *dst;
	unsigned int i, j, size;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	size = (_strlen(s1) + _strlen(s2) + 1);
	dst = (char *) malloc(size * sizeof(char));

	if (dst == 0)
	{
		return (0);
	}
	for (i = 0; *(s1 + 1) != '\0'; i++)
		*(dst + i) = *(s1 + i);

	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(dst + i) = *(s2 + j);
		i++;
	}
	return (dst);
}
