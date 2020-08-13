
void my_print_function(char *my_string, int foo)
{
    int a;
    int our_val = 2;

    printf("%s:%d\n", my_string, foo); // This is an in-line comment

    a = multiply(3, 4);

    printf("A: %d\n", a);

    a = multiply(our_val, 5);

    printf("A: %d\n", a);
    printf("Our val: %d\n", our_val);
}

