#include <stdio.>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char c;

	int d;

	c = 'a';
	d = '9';
	while
		(d < 10) {
			putchar(d + 'a');
			d++;
		}
	while
		(c <= 'f') {
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
