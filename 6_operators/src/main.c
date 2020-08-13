#include <stdio.h>

int foo = 2, bar = 4;

void compare(void)
{
    if(foo && bar)
        printf("Both non-zero\n");
    else if (foo && !bar)
        printf("Bar is zero!\n");
    else 
        printf("Foo is non-zero, bar maybe?\n");
}

void decide(void)
{
    switch (foo % 3){
        case 0:
            printf("Mod was zero\n");
            break;
        case 1:
            printf("Mod was one\n");
            break;
        default:
            printf("Mode was two - in default\n");
            break;
    }
}

int main()
{   

    printf("Plus: %d\n", foo + bar);

    int result = foo + bar;
    result += 1;
    //same as
    result = result + 1;
    //same as
    result++;

    printf("Result: %d\n", result);

    result = foo > bar;
    
    printf("Result: %d\n", result);

    if(foo && bar)
        printf("Horray\n");

    if(foo || result)
        printf("Horray\n");
    
    // foo == 0b0010
    // bar == 0b0100
    //     |  0b0110
    
    result = foo | bar;
    
    printf("Result: %d\n", result);

    result *= 2;

    printf("Result: %d\n", result);
    
    result -= foo;

    printf("Result: %d\n", result);

    compare();
    bar = 0;
    compare();
    foo = 0;
    compare();

    foo = 7;
    decide();
    foo++;
    decide();

    return 0;
}

