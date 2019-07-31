#include "holberton.h"
#include <stdio.h>
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
int print_number(va_list args)
{
	unsigned int abs, aux, i, num;
	int number;

	num = 0;
	number = va_arg(args, int);
	if (number < 0)
	{
		abs = number * (-1);
		num += _putchar('-');
	}
	else
		abs = number;

	aux = abs;
	i = 1;
	while (aux > 9)
	{
		aux = aux / 10;
		i = i * 10;
	}
	while (i >= 1)
	{
		num += _putchar(((abs / i) % 10) + '0');
		i = i / 10;
	}
	return (num);
}

/**
 * print_string - print string
 *
 * @args: string
 *
 * Return: Integer
 */
int print_string(va_list args)
{
	char *s;
	int i;
	int num = 0;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0 ; s[i] != '\0' ; i++)
		num += _putchar(s[i]);
	return (num);
}
