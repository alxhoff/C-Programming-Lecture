#include <stdio.h>
#include <string.h>

struct my_struct {
    int foo;
    int bar;
};



int main()
{
    struct my_struct my_struct_array[5] = {{.foo = 2, .bar = 3},  {.bar = 5}};

    printf("Size of struct: %d\n", sizeof(struct my_struct));
    printf("Size of array: %d\n", sizeof(my_struct_array));

    my_struct_array[4].bar = 10;

    my_struct_array[3].bar = my_struct_array[0].foo * my_struct_array[0].bar;

    char my_string[] = "This is my string";

    printf("String size: %d\n", sizeof(my_string));

    char second_string[18];

    strcpy(second_string, my_string);

    printf("Second: %s\n", second_string);

	return 0;
}
