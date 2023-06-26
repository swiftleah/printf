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
<<<<<<< HEAD
void printBinary(unsigned int b)
=======
int handle_d(va_list args, int *count);
>>>>>>> 4c4f181797f999dda4896ee18282984e72c41a56

#endif
