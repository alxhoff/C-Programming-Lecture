#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct my_struct {
	int int_member;
	short short_member;
};

void increment_short_member(struct my_struct *foo)
{
	foo->short_member++;
}

struct my_struct increment_int_member(struct my_struct foo)
{
	foo.int_member++;
	return foo;
}

int main()
{
	struct my_struct *my_struct_pointer =
		(struct my_struct *)malloc(sizeof(struct my_struct));
	if (my_struct_pointer == NULL)
		return -1;

	memset(my_struct_pointer, 0, sizeof(struct my_struct));

	(*my_struct_pointer).int_member = 2;
	my_struct_pointer->short_member = 5;

	struct my_struct static_structure =
		increment_int_member(*my_struct_pointer);

	increment_short_member(&static_structure);

	return 0;
}
