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
void print_integer(va_list args)
{
	printf("%d", va_arg(args, int));
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
	int num;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
		num += _putchar(s[i]);
	return (num);
}
