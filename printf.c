#include "holberton.h"
#include <stdio.h>
/**
 * _printf - produce ouput according to format
 *
 * @format: character string format
 *
 * Return: output
 */
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i;
	unsigned int j;

	optype_t list[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(args, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		if ('%' == format[i])
		{
			i++;
			j = 0;
			while (list[j].c != NULL)
			{
				if (format[i] == list[j].c[0])
				{
					list[j].f(args);
				}
				j++;
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			i++;
		}
	}
	va_end(args);
	return (0);
}

/**
 * print_char - print character
 *
 * @args: char
 *
 */
void print_char(va_list args)
{
	_putchar(va_arg(args, int));
}
/**
 * print_integer - print integer
 *
 * @args: integer
 *
 */
void print_integer(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_float - print float
 *
 * @args: float
 *
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_string - print a string
 *
 * @args: string
 *
 */
void print_string(va_list args)
{
	char *s;
	int i;

	s = va_arg(args, char *);
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
}
