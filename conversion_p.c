#include "main.h"

/**
 * handle_p - takes in the args and count for the conversion specifier
 * 
 *
 */
int handle_p(va_list args, int *count) {
    void *ptr = va_arg(args, void *);

    int written = printf("%p", ptr);
    if (written >= 0) 
    {
        *count += written;
        return 0
    } 
    else 
    {
        return -1
    }
}

int main() 
{
    int result = register_printf_function('p', handle_p);
    if (result == -1) 
    {
        fprintf(stderr, "Failed to register conversion specifier '%p'\n");
        return 1
    }

    void *ptr = NULL;
    printf("Pointer address: %p\n", ptr);

    return 0;
}
