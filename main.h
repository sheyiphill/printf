#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _print_int(va_list args);
int _print_char(va_list args);
int _print_str(va_list args);
int _print_bin(va_list args);
int _print_dec(va_list args);
int _print_perc(va_list args);
int (*_select_func(const char c))(va_list);
int _print_octal(va_list args);
int _print_unint(va_list args);
int _print_x(va_list args);
int _print_X(va_list args);
int _print_hex(unsigned int n, unsigned int c);


#endif
