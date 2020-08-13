#include <stdio.h>
#include <stdlib.h>

int *my_int_reference;
int my_global = 2;

void my_func(void)
{
	int my_int = 2;

	printf("My int: %d, my global: %d\n", my_int, my_global);
}

void my_print_func(void)
{
	printf("My variable on the heap has a value of: %d @ %p\n",
	       *my_int_reference, my_int_reference);
}

int main()
{
	int foo, bar;

	printf("Foo: %p\nBar: %p\nSize of Foo: %d\n", &foo, &bar, sizeof(foo));

	my_func();

	printf("My global in main: %d\n", my_global);

	my_int_reference = malloc(sizeof(int));

	if (my_int_reference == NULL)
		return -1; // Memory allocation error

	my_print_func();
}
