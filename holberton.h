#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct optype - struct for operation type
 *
 * @c: char types
 * @f: pointer to function
 *
 */
typedef struct optype
{
	char *c;
	void (*f)(va_list);
} optype_t;
int _printf(const char *format, ...);
int _putchar(char c);
void print_char(va_list);
void print_string(va_list);
#endif
