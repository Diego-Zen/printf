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
	if (format != NULL)
	{

	va_list args;
	unsigned int i = 0, num = 0;

	va_start(args, format);

	if (format[0] == '%' && format[1] == '\0')
		return (-1);

	while (format != NULL && format[i] != '\0')
	{
		if ('%' == format[i])
		{
			i++;
			if (format[i] == '%')
				num += _putchar(format[i]);
			num += type_option(format[i], args);
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
	return (-1);
}
