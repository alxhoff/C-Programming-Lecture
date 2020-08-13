#include <stdio.h>
#include "printing.h"

int multiply(int val, int multipler)
{
    printf("Our value: %d\n", val);

    val++;

    printf("Our value: %d\n", val);

    return val * multipler;
}

int main()
{   
    my_print_function("Hello, World!", 2);

    return 0;
}


