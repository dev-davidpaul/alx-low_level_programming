#include "main.h"
/**
 * _strchr -> string chracter
 * @s: string given
 * @c: another char
 * Return: a string
*/
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while ([a])
		a++;
	for (b = 0; b < a; b++)
	{
		if (c == s[b])
			s += b;
		return (s);
	}
	return ('\0');
}