#ifndef MAIN_H
#define MAIN_H

/* Libraries: */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>


/* Prototypes: */

int _printf(const char *format, ...);
void handle_c(va_list args, int *count);
void handle_s(va_list args, int *count);
void handle_percent(int *count);
int handle_b(va_list args, int *count);
int handle_d(va_list args, int *count);
int handle_r(va_list args, int *count);
void reverse_str(const char *str, int *count);

#endif
