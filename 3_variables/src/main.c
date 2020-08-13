#include <stdio.h>

int main()
{   
    int foo = 5;
    unsigned char bar = 'a';

    printf("Foo is %d bytes and bar is %d bytes\n", sizeof(foo), sizeof(bar));

    printf("bar is %d\n",(int) bar);

    bar = 256;
    
    printf("bar is %d\n",(int) bar);

    bar++; // same as bar = bar + 1 ~ bar += 1;

    printf("bar is %d\n",(int) bar);

    bar <<= 1;

    printf("bar is %d\n",(int) bar);

    float foo_bar = 1.1;
    
    // foo_bar <<= 1;

}

