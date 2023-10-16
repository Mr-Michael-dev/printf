#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);

int _putchar(char c);

int handle_char(char arg);

int handle_str(char *arg);

int handle_int(int arg);

int handle_unint(unsigned int arg);

int my_parser(const char *format, va_list args);

#endif
