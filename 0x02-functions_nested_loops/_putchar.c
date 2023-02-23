#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: on succrs  1
 * On error, -1 is returned, and errno is set approriately
*/

int _purchar(char c)
{
	return (write(1, &c, 1));
}
