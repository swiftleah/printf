#ifndef MAIN_H
#define MAIN_H

/* Libraries: */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>


/* Prototypes: */

int _printf(const char *format, ...);
void handle_c(va_list args, int *count);
void handle_s(va_list args, int *count);
void handle_percent(int *count);
int handle_b(va_list args, int *count);
int handle_d(va_list args, int *count);
int handle_r(va_list args, int *count);
void reverse_str(const char *str, int *count);
int handle_x(va_list args, int *count);
int handle_X(va_list args, int *count);
int handle_o(va_list args, int *count);
int handle_u(va_list args, int *count);
int handle_S(va_list args, int *count);

#endif

