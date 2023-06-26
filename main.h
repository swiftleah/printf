#ifndef MAIN_H
#define MAIN_H

/* Libraries: */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


/* Prototypes: */

int _printf(const char *format, ...);
void handle_c(va_list args, int *count);
void handle_s(va_list args, int *count);
void handle_percent(int *count);
void printBinary(unsigned int b)

#endif
