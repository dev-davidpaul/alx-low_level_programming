#include <unistd.h>
/**
 * _putchar - wrires the character c to stdout
 * @c: the character to print
 * Return: on succes  1
 * on error, -1 is returned, and the  errno is set appropriately
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
