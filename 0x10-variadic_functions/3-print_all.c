#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j, c = 0;
	char *str;
	va_list list;
	const char t_arg[] = "cifs";

	va_start(list, format);
       
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			}
			j++;
		}
		switch (format[i])
		{
				case "c":
					printf("%s%c", sep, va_arg(list, int)), c = 1;
					break;
				case "i":
					printf("%s%d", sep, va_arg(list, int)), c = 1;
					break;
				case "f":
					printf("%s%f", sep, va_arg(list, double)), c = 1;
					break;
				case "s":
					str = va_arg(list, char *), c = 1;
					if (!str)
					{
						printf( "(nil)");
					printf("%s%s", sep, str);
					break;
					}
					printf("%s", str);
					break;
		}
					i++;
	}
	printf("\n");
	va_end(list);
}
