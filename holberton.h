#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>

/** structure sheet */
/**
 * struct pf - structure
 * @spec: char * argument
 * @f: function pointer
 */
typedef struct pf
{
	char *spec;
	int (*f)(va_list);
} prtop;
int _printf(const char *format, ...);
int _putchar(char c);
void _puts(char *s);
int _strlen(char *s);
int (*get_ptn_fcn(const char *format))(va_list);
int _printf(const char *format, ...);
int print_to_c(va_list c);
int print_to_numbers(va_list args);
int print_to_string(va_list s);
int print_to_binary(va_list b);
int recursive_binary(unsigned int n);
int print_hex(unsigned int n, unsigned int c);
int print_x(va_list x);
#endif /* HOLBERTON_H */
