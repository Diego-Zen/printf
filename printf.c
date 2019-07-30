#include "holberton.h"
#include <stdio.h>
/**
 * _printf - produce ouput according to format
 *
 * @format: character string format
 *
 * Return: number of characters
 */
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i;
	unsigned int j;
	int num = 0;

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
					num += list[j].f(args);
				}
				j++;
			}
			i++;
		}
		else
		{
			num += _putchar(format[i]);
			i++;
		}
	}
	va_end(args);
	return (num);
}

/**
 * print_char - print character
 *
 * @args: char
 *
 * Return: integer
 */
int print_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
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
 * Return: integer
 */
int print_string(va_list args)
{
	char *s;
	int i;
	int num;

	s = va_arg(args, char *);
	for (i = 0; s[i] != '\0'; i++)
		num += _putchar(s[i]);
	return num;
}
