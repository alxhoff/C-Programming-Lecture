#include <stdio.h>
#include <stdlib.h>

void my_func(int *foo)
{
	printf("Wanting to modify int @ loc: %p\n", foo);

	*foo *= 2;

	printf("%d is stored there\n", *foo);
}

int main()
{
	int bar = 2;
	my_func(&bar);
	printf("Bar is now: %d\n", bar);

	int *foobar = (int *)calloc(5, sizeof(int));
	if (foobar == NULL)
		return -1;

	printf("Uniti'd memory: %d @ %p\n", *foobar, foobar);

	foobar[2] = 5;
	my_func(&foobar[2]);

	foobar = (int *)realloc(foobar, 10 * sizeof(int));
	if (foobar == NULL)
		return -1;

	foobar[9] = 10;

	printf("The last value of foobar is %d\n", foobar[9]);

	char *barfoo = malloc(sizeof(char) * 10);
	if (barfoo == NULL) {
		goto err_barfoo;
	}

	free(foobar);
	free(barfoo);

	return 0;
err_barfoo:
	free(foobar);
	return -1;
}
