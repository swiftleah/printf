#ifndef MAIN_H
#define MAIN_H

/* Libraries: */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


/* Prototypes: */

int _printf(const char *format, ...);
int handle_c(va_list args);
int handle_s(va_list args);
void handle_percent(void);

#endif
