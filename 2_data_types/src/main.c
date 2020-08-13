#include <stdio.h>

enum rainbow_colours {
    RED,
    BLUE = 5,
    GREEN,
    YELLOW,
    PURPLE
};

void useless_function(void)
{
    printf("I do nothing\n");
}

int main()
{   
    signed int foo = -1;
    unsigned int bar = foo;

    printf("%d , %u\n", foo, bar);

    printf("%d, %d\n", sizeof(foo), sizeof(bar));

    printf("size of long: %d,\n", sizeof(long));

    enum rainbow_colours my_fav_rainbow_colour = RED;

    printf("Enum val: %d, size: %d\n", my_fav_rainbow_colour, sizeof(enum rainbow_colours));

    useless_function( );

    return 0;
}

